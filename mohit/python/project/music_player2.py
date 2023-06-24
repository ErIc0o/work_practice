from tkinter import Tk
from tkinter import *
from tkinter import ttk
import os
from PIL import Image, ImageTk
from pygame  import mixer
import time
import tkinter.messagebox
from tkinter import filedialog
from tkinter.filedialog import askdirectory
from mutagen.mp3 import MP3

mixer.init()

class music_player :
    def __init__(self,root):
        self.root=root
        self.root.title("music_player")
        self.root.geometry('700x400')
        self.root.configure(background='white')
        self.stooped=""
        self.root.resizable(0,0)
    
        def Openfile():
            global songs
            path = filedialog.askdirectory()
            if path:
                os.chdir(path)
                songs = os.listdir(path)
                show()
                
        # checking if songs are MP3 or not------        
        def show(): 
            global songs       
            for song in songs:
                if song.endswith(".mp3"):
                    playlistbox.insert(END, song)                

        #listbox---->
        playlistbox=Listbox(self.root,width=25,height=13)
        playlistbox.place(x=450,y=60)
        #adding scrollbar
        scroll=Scrollbar(self.root)
        scroll.place(x=605,y=80)
        #attaching scrollbar and listbox togather
        playlistbox.config(yscrollcommand=scroll.set)
        scroll.config(command= playlistbox.yview)

        #open butoon-->
        open=Button(self.root,text="open",command=Openfile)
        open.place(x=450,y=30)
       
        #Menubar-->
        self.menubar=Menu(self.root)
        self.root.configure(menu=self.menubar)

        #Submenubar---->
        self.submenu=Menu(self.menubar,tearoff=0)
        self.menubar.add_cascade(label='File',menu=self.submenu)
        self.submenu.add_command(label='Open',command=Openfile)
        self.submenu.add_command(label='Exit',command=self.root.destroy)
                #ADDING SECOUND SUBMENU----
        #Message--->
        def About():
            tkinter.messagebox.showinfo("About us","Created by Mohit")

        self.submenu=Menu(self.menubar,tearoff=0)
        self.menubar.add_cascade(label='Help',menu=self.submenu)
        self.submenu.add_command(label='About us',command=About)


        #Adding lable--->
        self.filelabel=Label(text='play---and--enjoy------------------------------------',bg='black',fg='white',font=22)
        self.filelabel.place(x=2,y=20)

        # #Adding left side image-->
        # filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\leftsideimage.jpg"
        # self.pil_img_l = Image.open(filename)
        # self.photo_l=ImageTk.PhotoImage(self.pil_img_l)
        # self.label1=Label(self.root,image=self.photo_l).place(x=260,y=80,width=500,height=250)

        # Adding Image-->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\mainimg.png"
        self.pil_img = Image.open(filename)
        self.photo=ImageTk.PhotoImage(self.pil_img)
        self.label=Label(self.root,image=self.photo,background="black").place(x=2,y=60)
    
        #song length-->
        def length_bar():
            try:
                if stooped:
                    return
                # starting from Zero--
                current_time=mixer.music.get_pos()/1000
                current_time +=1

                # convert c urrent_time in min.. and sec..
                convert_current_time=time.strftime('%M:%S',time.gmtime(current_time))   
                

                global song_mut_length

                song_mut=MP3(play_it)
                song_mut_length= song_mut.info.length
                convert_song_mut_length=time.strftime('%M:%S',time.gmtime(song_mut_length))

                if int(self.my_slider.get())== int(song_mut_length):# for stoping current time at the end in rigth time
                     self.lengthbar.config(text=f'{convert_song_mut_length}')

                elif paused:
                    pass

                elif int(self.my_slider.get())==int(current_time):# slider hasn't been moved
                    # update slider to position----
                
                    slider_position=int(song_mut_length)
                    self.my_slider.config(to=slider_position,value=int(current_time))    
                else:
                    
                    # slider hasn't been moved
                    slider_position=int(song_mut_length)
                    self.my_slider.config(to=slider_position,value=int(self.my_slider.get())) 
                    # convert current_time in min.. and sec..
                    convert_current_time=time.strftime('%M:%S',time.gmtime(int(self.my_slider.get())))    
                    # blit on screen--
                    self.lengthbar.config(text=f'{convert_current_time}: {convert_song_mut_length}')
                    # move this current time and length of song along by one sec---------
                    next_time= int (self.my_slider.get())+1
                    self.my_slider.config(value=next_time)
                    # update time every sec-------
                    self.lengthbar.after(1000,length_bar)
            except Exception as e:
                print(e)

        # lable for length bar-->
        self.lengthbar=Label(self.root,text="00:00",bg='black',fg='white',font=20)
        self.lengthbar.place(x=2,y=270)

         # progress--scale--.
        def slider(x):
            play_it = playlistbox.get(ACTIVE)                       
            mixer.music.load(play_it)
            mixer.music.play(start=int(self.my_slider.get()))

        # song_slider-------
        self.my_slider=ttk.Scale(self.root,orient="horizontal",from_=0,length=380,command=slider)
        self.my_slider.place(x=100,y=270)

        #BUTTON
        #function for play button--> 
        
        # stooped = False
        def playmusic():
            global play_it
            global stooped
            stooped = False
            try:
                play_it = playlistbox.get(ACTIVE)                       
                mixer.music.load(play_it)
                mixer.music.play()
                self.filelabel['text']='Music--'+ os.path.basename(play_it)
                # self.label1['text']='Music Playing....'
                length_bar()
                
            except:
                tkinter.messagebox.showerror('Error','File Could Not Found, Please Try Again...')
               
        #Adding play butoon-->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\play.jpeg"
        self.pil_b1=Image.open(filename)
        self.photo_b1=ImageTk.PhotoImage(self.pil_b1)
        self.b1=Button(self.root,image=self.photo_b1,bd=0,bg="white",command=playmusic).place(x=5,y=300)


        #funcation for pause butoon-->
        global paused
        paused = False
        def pausemusic(is_paused):
            global paused
            paused=is_paused

            if paused: #if paused == true
                mixer.music.unpause()
                paused =False
                
            else:
                mixer.music.pause()
                paused=True
                
        #Adding pause butoon-->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\2.jpeg"
        self.pil_b2=Image.open(filename)
        self.photo_b2=ImageTk.PhotoImage(self.pil_b2)
        self.b1=Button(self.root,image=self.photo_b2,bd=0,bg="white",command=lambda: pausemusic(paused)).place(x=85,y=300)

        #funcation for stop butoon-->
        global stooped
        stooped = False
        def stopmusic():
            #reset slider and listbox
            # playlistbox.config(Text='')
            self.my_slider.config(value=0)
            # stop song playing
            mixer.music.stop()
            playlistbox.selection_clear(ACTIVE)
            
            #set stop variable to ture--
            global stooped
            stooped = True

        #Adding stop butoon-->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\3.jpeg"
        self.pil_b3=Image.open(filename)
        self.photo_b3=ImageTk.PhotoImage(self.pil_b3)
        self.b3=Button(self.root,image=self.photo_b3,bd=0,bg="white",command=stopmusic).place(x=165,y=300)

        # function for next button--->
        def next_song():
            global play_it
            index_song=songs.index(play_it)
            new=index_song + 1
            song=songs[new]
            mixer.music.load(song)
            mixer.music.play()

            playlistbox.delete(0,END)
            show()

            playlistbox.select_set(new)
            self.filelabel['text']=song
            play_it=song
            self.my_slider.config(value=0)# for song starts from starting/00

        # next button--->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\next.png"
        self.next=Image.open(filename)
        self.resized=self.next.resize((50,50),Image.ANTIALIAS)
        self.photo_next=ImageTk.PhotoImage(self.resized)
        self.nextbtn=Button(self.root,image=self.photo_next,bd=0,bg="white",command=next_song).place(x=320,y=300)
        
        # function for next button--->
        def previous_song():
            global play_it
            index_song=songs.index(play_it)
            new=index_song - 1
            song=songs[new]
            mixer.music.load(song)
            mixer.music.play()

            playlistbox.delete(0,END)
            show()

            playlistbox.select_set(new)
            self.filelabel['text']=song
            play_it=song
            self.my_slider.config(value=0)# for song starts from starting/00
        # next button--->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\prev.png"
        self.preview=Image.open(filename)
        self.resized=self.preview.resize((40,40),Image.ANTIALIAS)
        self.photo_preview=ImageTk.PhotoImage(self.resized)
        self.previwbtn=Button(self.root,image=self.photo_preview,bd=0,bg="white",command=previous_song).place(x=250,y=305)

        # mute--->
        def mute():
            self.scale.set(0)
            filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\mute.jpeg"
            self.pil_b5=Image.open(filename)
            self.photo_b5=ImageTk.PhotoImage(self.pil_b5)
            self.b5=Button(self.root,image=self.photo_b5,bd=0,bg="white",command=unmute).place(x=470,y=300)
        
        # unmute-->
        def unmute():
            self.scale.set(25)
            filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\4.jpeg"
            self.pil_b4=Image.open(filename)
            self.photo_b4=ImageTk.PhotoImage(self.pil_b4)
            self.b4=Button(self.root,image=self.photo_b4,command=mute,bd=-1,bg="white").place(x=470,y=300)

        #voume--img-->
        filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\4.jpeg"
        self.pil_b4=Image.open(filename)
        self.photo_b4=ImageTk.PhotoImage(self.pil_b4)
        self.b4=Button(self.root,image=self.photo_b4,command=mute,bd=-1,bg="white").place(x=470,y=300)

        #volume_Functon-->
        def volume(vol):
            volume=int(vol)/100
            mixer.music.set_volume(volume)

        #Volume bar-->
        self.scale=Scale(self.root,from_=0,to=100,orient=HORIZONTAL,
                        length=150,command=volume)
        self.scale.set(20)
        mixer.music.set_volume(0.2)
        self.scale.place(x=530,y=300)
        
       
root=Tk()
obj=music_player(root)
root.mainloop()
