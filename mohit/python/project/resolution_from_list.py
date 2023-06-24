import tkinter as tk
from tkinter import ttk
from pytube import YouTube

def download_video():
    video_url = url_entry.get()
    try:
        yt = YouTube(video_url)
        selected_resolution = resolution_combobox.get()
        resolutions = yt.streams.filter(progressive=True).order_by('resolution').desc()
        stream = resolutions.filter(res=selected_resolution).first()
        stream.download()
        status_label.config(text="Download completed.")
    except Exception as e:
        status_label.config(text="Error occurred during download.")

# Create the Tkinter window
window = tk.Tk()
window.title("YouTube Downloader")

# URL Entry
url_label = tk.Label(window, text="Video URL:")
url_label.pack()
url_entry = tk.Entry(window, width=50)
url_entry.pack()

# Download Button
def download_button_clicked():
    selected_resolution = resolution_combobox.get()
    if not selected_resolution:
        status_label.config(text="Please select a resolution.")
        return
    
    download_button.config(state=tk.DISABLED)
    download_video()
    download_button.config(state=tk.NORMAL)

download_button = tk.Button(window, text="Download", command=download_button_clicked)
download_button.pack()

# Resolution Selection
resolution_label = tk.Label(window, text="Select Resolution:")
resolution_label.pack()

resolution_combobox = ttk.Combobox(window, state="readonly", width=10)
resolution_combobox['values'] = ("1080p", "720p", "480p", "360p", "240p", "144p")
resolution_combobox.set("720p")
resolution_combobox.pack()

# Status Label
status_label = tk.Label(window, text="")
status_label.pack()

# Run the Tkinter event loop
window.mainloop()
