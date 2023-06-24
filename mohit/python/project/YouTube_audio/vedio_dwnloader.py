from tkinter import*
import time 
from tkinter import ttk,filedialog,messagebox
from pytube import YouTube


def main_page():
    root=Tk()
    root.title("YouTube downloder")
    root.geometry("500x300")
    root.resizable(0,0)

    #Frame in root window--------
    top=Frame(root)
    top.pack(side=TOP,anchor=N,padx=10)

    # Saving video/audio ----------
    
    def select():
        global save_path
        path=filedialog.askdirectory()
        save_path=f"{path}"

    # Function for video/audio details--------
    def check_details():
        root.geometry("500x650")
        root.resizable(0,0)

        url=YouTube(str(link.get()))

        if link.get()=="":
            messagebox.showerror("Link Error","Please paste a YouTube link")
        else:
            try:
                video_Title.set(url.title)
                xx=time.strftime("%H:%M:%S",time.gmtime(url.length))
                video_Length.set(xx)
                video_uploaded.set(url.publish_date)
                video_Author.set(url.author)
            except:
                messagebox.showerror("Link Error","Please paste a YouTube link")
                


        # Label's for detalis---------------
        Lbl=Label(frame2,text="video Title",font="san-serif 14 bold")
        Lbl.grid(row=0,column=0)
        Lbl=Label(frame2,text="",font="san-serif 14 bold",textvariable=video_Title)
        Lbl.grid(row=1,column=0)
        Lbl=Label(frame2,text="video Length",font="san-serif 14 bold")
        Lbl.grid(row=2,column=0)
        Lbl=Label(frame2,text="",font="san-serif 14 bold",textvariable=video_Length)
        Lbl.grid(row=3,column=0)
        Lbl=Label(frame2,text="video uoloaded",font="san-serif 14 bold")
        Lbl.grid(row=4,column=0)
        Lbl=Label(frame2,text="",font="san-serif 14 bold",textvariable=video_uploaded)
        Lbl.grid(row=5,column=0)
        Lbl=Label(frame2,text="video Author",font="san-serif 14 bold")
        Lbl.grid(row=6,column=0)
        Lbl=Label(frame2,font="san-serif 14 bold",textvariable=video_Author)
        Lbl.grid(row=7,column=0)    
        more_buttons()

    # Function for video dwonloading-----------
    def Dwonload_Video():
        url=YouTube(str(link.get()))
        vv=url.streams.filter(progressive=True).get_highest_resolution()
        vv.download(save_path)
        messagebox.showinfo("SUCCESSFULLY","Downloaded in"+ save_path)

    # Function for audio dwonloading-----------
    def Dwonload_Audio():
        url=YouTube(str(link.get()))
        yy=url.streams.filter(only_audio=True).first()
        yy.download(save_path)
        messagebox.showinfo("SUCCESSFULLY","Downloaded in"+ save_path)

    # buttons for video/audio dwonloading----------------
    def more_buttons():
        frame2=Frame(root)
        frame2.pack(pady=10) 

        btn=Button(frame2,text="Download Video",font="san-serif 14 bold",command=Dwonload_Video,foreground='white',background='red')
        btn.grid(row=0,column=0)
        btn=Button(frame2,text="Download Audio",font="san-serif 14 bold",command=Dwonload_Audio,foreground='white',background='red')
        btn.grid(row=0,column=1)  

    # Fram for text------
    frame1=Frame(root)
    frame1.pack(pady=10)
    #
    link=StringVar()
    # text lable------------
    Lbl=Label(frame1,text="Paste Link",font="san-serif 14 bold").pack()

    #entry-felid---------------------------------
    entry=Entry(frame1,width=60,textvariable=link).pack()

    # btn=ttk.Button(frame1,text="clear").pack()
    #
    Lbl=Label(frame1,text="Choose path to save",font="san-serif 14 bold").pack()
    
    
    #Button for file saving------------------
    
    btn=ttk.Button(frame1,text="save",command=select).pack()

    #second frame------------------
    frame2=Frame(root)
    frame2.pack(pady=10)

    #
    video_Title=StringVar()
    video_Length=StringVar()
    video_uploaded=StringVar()
    video_Author=StringVar()

    # Button for checking details------------------------------
    btn=Button(frame2,text="check",font="san-serif 14 bold",command=check_details,foreground='white',background='red')
    btn.grid(row=10,column=0)



    root.mainloop()

main_page()