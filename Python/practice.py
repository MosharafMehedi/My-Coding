# I have my robot working on my second montior
monitorNum = 1
dxcam=1
#Camera Setup
camera = dxcam.create(output_idx=monitorNum, output_color="BGR")
camera.start()

while 1:
  # Get raw pixels from the screen, save it to a Numpy array
  img = camera.get_latest_frame()