from picamera import PiCamera
from time import sleep
import cv2
import numpy as np

camera = PiCamera()


camera.start_preview()
for i in range(5):
    sleep(6)
    camera.capture('image%s.jpg' % i)
    img = cv2.imread('path/to/image.jpg')
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    # Apply thresholding to the grayscale image
    _, thresh = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)

    # Find contours in the thresholded image
    contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)

    # Draw the contours on a black background
    black = np.zeros_like(img)
    cv2.drawContours(black, contours, -1, (255, 255, 255), 2)
    cv2.imwrite('path/to/resulting_image_%s.jpg' % i, black)

camera.stop_preview()



# Load the input image

# Convert the image to grayscale
