#----------------------------------------Music_Player--------------------------------------------#
from tkinter import *
from PIL import Image,ImageTk
import os
import time
import tkinter.messagebox
# import threading
from tkinter import filedialog
# from tkinter.filedialog import askdirectory
from pygame import mixer
from mutagen.mp3 import MP3 #for song length,#pip install mutagen
mixer.init()

#------------------------------------------------------------------------------------------------------------#
root=Tk()
# Title--
root.title('Music_Player')
# paused = False
# Width and Height--
root.geometry('700x400')
songs=""
# resizable window off--
root.resizable(0,0)
Music_Name="" 
# Backgroundcolor--
root.configure(background='white')

# Menu---
menubar=Menu(root)
root.configure(menu=menubar)

# For Messages--
def About():
    tkinter.messagebox.showinfo('About Us','Music Player Created By MOHIT')

# salecting--folder--
def Openfile():
    global  songs
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
                
# submenu----
submenu=Menu(menubar,tearoff=0)
menubar.add_cascade(label='File',menu=submenu)
submenu.add_command(label='Open',command=Openfile)
submenu.add_command(label='Exit',command=root.destroy)

submenu2=Menu(menubar,tearoff=0)
menubar.add_cascade(label='Help',menu=submenu2)
submenu2.add_command(label='About',command=About)

# function for buttons-------------------------------------------------------------------------
# for song length--
def length_bar():
    # starting from Zero--
    current_time=mixer.music.get_pos()/1000

    # convert current_time in min.. and sec..
    convert_current_time=time.strftime('%M:%S',time.gmtime(current_time))

    # select mp3 songs--
    song_mut=MP3(Music_Name)

    # get length of songs--
    song_mut_length=song_mut.info.length

    # convert into min. and sec.
    convert_song_mut_length=time.strftime('%M:%S',time.gmtime(song_mut_length))

    # blit on screen--
    lengthbar.config(text=f'{convert_current_time}/{convert_song_mut_length}')
    lengthbar.after(1000,length_bar)

# play button function------->
def playmusic():
    global Music_Name
    # if(paused == False):
    try:
            Music_Name = playlistbox.get(ACTIVE)
            mixer.music.load(Music_Name)
            mixer.music.play()
            filelabel['text']='Music--'+ os.path.basename(Music_Name)
            label1['text']='Music Playing....'
            length_bar()
            
            
    except:
            tkinter.messagebox.showerror('Error','File Could Not Found, Please Try Again...')
    # else:
    #     mixer.music.unpause()
    
    #     label1['text']='Music unpused'
                        


# function for pausebtn
# def pausemusic():
#     global paused
#     paused=True
#     mixer.music.pause()
#     label1['text']='Music_Paused'
global paused
paused = False
def pausemusic(is_paused):
    global paused
    paused=is_paused

    if paused: #if paused == true
        mixer.music.unpause()
        paused =False
        label1['text']='Music unpause'
        
    else:
        mixer.music.pause()
        paused=True
        label1['text']='Music Pause'
    
# function for stopbtn-
def stopmusic():
    global paused
    paused = False
    mixer.music.stop()
    label1['text']='Music Stoped'
   
# next butoon-function------>
def next():
    global Music_Name
    index_song=  songs.index(Music_Name)
    new=index_song + 1
    song=songs[new]
    mixer.music.load(song)
    mixer.music.play()

    playlistbox.delete(0,END)
    show()

    playlistbox.select_set(new)
    filelabel['text']=song
    Music_Name=song

# previous butoon-function---->
def previous():
    global Music_Name
    index_song=  songs.index(Music_Name)
    new=index_song - 1
    song=songs[new]
    mixer.music.load(song)
    mixer.music.play()

    playlistbox.delete(0,END)
    show()

    playlistbox.select_set(new)
    filelabel['text']=song
    Music_Name=song

#mute-unmute-function-->
muted = FALSE # making muted to global-----
def mute_music():
    global muted
    if muted: # if music is muted----
        mixer.music.set_volume(0.3)
        volumebtn.configure(image=volumephoto)
        scale.set(30)
        muted=FALSE
        label1['text']='Music unmuted'
    
    else: # mute the music-----
        mixer.music.set_volume(0)
        volumebtn.configure(image=mutephoto)
        scale.set(0)
        muted=TRUE
        label1['text']='Music muted'

# for Volumebar ---
def volume_(vol):
    volume= int(vol)/100
    mixer.music.set_volume(volume)


# image for buttons----------------------------------------------------------------------------------#

# Adding mainimg------>
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\headphones-gc2c911755_640.png"
pil_img = Image.open(filename)
resized=pil_img.resize((300,200),Image.ANTIALIAS)
photo=ImageTk.PhotoImage(resized)

# play_button-img---->
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\play (1).png"
pil_b1=Image.open(filename)
resized=pil_b1.resize((48,48),Image.ANTIALIAS)
photo_b1=ImageTk.PhotoImage(resized)

# pause_button-function------>
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\pause (4).png"
pil_b2=Image.open(filename)
resized=pil_b2.resize((50,50),Image.ANTIALIAS)
photo_b2=ImageTk.PhotoImage(resized)

# stop_button-function------>
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\stop-button.png"
pil_b3=Image.open(filename)
resized=pil_b3.resize((50,50),Image.ANTIALIAS)
photo_b3=ImageTk.PhotoImage(resized)

# previous--button--img-->
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\prev.png"
pil_b6=Image.open(filename)
resized_photo=pil_b6.resize((50,50),Image.ANTIALIAS)
photo_b6=ImageTk.PhotoImage(resized_photo)

# next--butoon--img-->
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\next.png"
pil_b5=Image.open(filename)
resized=pil_b5.resize((50,50),Image.ANTIALIAS)
photo_b5=ImageTk.PhotoImage(resized)

# mute--img--->
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\mute.png"
pil_b5=Image.open(filename)
resized=pil_b5.resize((50,50),Image.ANTIALIAS)
mutephoto=ImageTk.PhotoImage(resized)

# volume--img-->
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\volume-up.png"
pil_b4=Image.open(filename)
resized=pil_b4.resize((50,50),Image.ANTIALIAS)
volumephoto=ImageTk.PhotoImage(resized)

#Adding left side image-->
filename=r"C:\Users\BiShT'S\Desktop\MOHIT WORK\mohit\python\project\leftsideimage.jpg"
pil_img_l = Image.open(filename)
photo_l=ImageTk.PhotoImage(pil_img_l)
label1=Label(root,image=photo_l).place(x=250,y=80,width=500,height=200)

#creating button------------------------------------------------------------------------------#
# open butoon-->
open=Button(root,text="open",command=Openfile)
open.place(x=450,y=30)

# playbutton----------->
playbutton=Button(root,image=photo_b1,bd=0,bg="white",command=playmusic)
playbutton.place(x=100,y=311)

# pause button----->
pausebtn=Button(root,image=photo_b2,bd=0,bg="white",command=lambda: pausemusic(paused))
pausebtn.place(x=200,y=310)

# stop butoon------>
stopbtn=Button(root,image=photo_b3,bd=0,bg="white",command=stopmusic)
stopbtn.place(x=300,y=310)

# previous button------->
previousbtn=Button(root,image=photo_b6,bd=0,bg="white",command=previous)
previousbtn.place(x=5,y=310)

# next button-------->
nextbtn=Button(root,image=photo_b5,bd=0,bg="white",command=next)
nextbtn.place(x=400,y=310)

# volume--button-->
volumebtn=Button(root,image=volumephoto,command=mute_music,bd=-1,bg="white")
volumebtn.place(x=500,y=310)

# Label--------------------------------------------------------------------------------------------------


# Listbox--->
playlistbox=Listbox(root,width=25,height=13)
playlistbox.place(x=450,y=60)
# main image lable-------->
label=Label(root,image=photo,background="white").place(x=2,y=60)
# Adding Label------
filelabel=Label(text='Select And Play',bg='white',fg='black',font=22)
filelabel.place(x=5,y=20)
        
# label for songs length-------
lengthbar=Label(root,text='00:00',font=20,bg='white',fg='black')
lengthbar.place(x=5,y=270)        

# label--------
label1=Label(root,text='Lets Play It.',bg='white',fg='black',font=20)
label1.pack(side=BOTTOM,fill=X)

# volume bar-------
scale=Scale( root,from_=0,to=100,orient=HORIZONTAL,background="#ffffff",bd=-1,length=110,command=volume_)
scale.place(x=580,y=315)
scale.set(30)

#----------------------------------------------------------------------------------------------------#
root.mainloop()
#-----------------------------------------------------------------------------------------------------#