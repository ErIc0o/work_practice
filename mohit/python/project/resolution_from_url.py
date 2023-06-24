import tkinter as tk
from pytube import YouTube

def download_video():
    video_url = url_entry.get()
    try:
        yt = YouTube(video_url)
        resolutions = yt.streams.filter(progressive=True).order_by('resolution').desc()
        available_resolutions = [str(stream.resolution) for stream in resolutions]
        resolution = resolution_choice.get()
        if resolution in available_resolutions:
            selected_stream = resolutions.get_by_resolution(resolution)
            selected_stream.download()
            status_label.config(text="Download complete!")
        else:
            status_label.config(text="Selected resolution not available.")
    except Exception as e:
        status_label.config(text="Error: " + str(e))

# Create the tkinter window
window = tk.Tk()
window.title("YouTube Downloader")

# Create the URL label and entry
url_label = tk.Label(window, text="Enter YouTube URL:")
url_label.pack()
url_entry = tk.Entry(window, width=50)
url_entry.pack()

# Create the resolution label and dropdown
resolution_label = tk.Label(window, text="Select Resolution:")
resolution_label.pack()
resolution_choice = tk.StringVar()
resolution_dropdown = tk.OptionMenu(window, resolution_choice, "")
resolution_dropdown.pack()

# Create the download button
download_button = tk.Button(window, text="Download", command=download_video)
download_button.pack()

# Create the status label
status_label = tk.Label(window, text="")
status_label.pack()

# Function to update available resolutions when URL is entered
def update_resolutions(*args):
    video_url = url_entry.get()
    try:
        yt = YouTube(video_url)
        resolutions = yt.streams.filter(progressive=True).order_by('resolution').desc()
        available_resolutions = [str(stream.resolution) for stream in resolutions]
        resolution_choice.set("")
        resolution_dropdown["menu"].delete(0, "end")
        for res in available_resolutions:
            resolution_dropdown["menu"].add_command(label=res, command=tk._setit(resolution_choice, res))
    except Exception as e:
        pass

# Bind the function to the URL entry
url_entry.bind("<Return>", update_resolutions)

# Run the tkinter event loop
window.mainloop()
