# import cv2
# import numpy as np

# # Create a VideoCapture object
# cap = cv2.VideoCapture(0)

# while True:
#     # Capture a frame from the video feed
#     ret, frame = cap.read()

#     # Convert the frame to grayscale
#     gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

#     # Apply thresholding to the grayscale image
#     _, thresh = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)

#     # Find contours in the thresholded image
#     contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)

#     # Draw the contours on a black background
#     black = np.zeros_like(frame)
#     cv2.drawContours(black, contours, -1, (255, 255, 255), 2)

#     # Show the resulting image
#     cv2.imshow('Contours', black)

#     # Check if the user wants to quit
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break

# # Release the VideoCapture object and close all windows
# cap.release()
# cv2.destroyAllWindows()


import cv2
import numpy as np

# Load the input image
img = cv2.imread('path/to/image.jpg')

# Convert the image to grayscale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Apply thresholding to the grayscale image
_, thresh = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)

# Find contours in the thresholded image
contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)

# Draw the contours on a black background
black = np.zeros_like(img)
cv2.drawContours(black, contours, -1, (255, 255, 255), 2)

# Show the resulting image
cv2.imshow('Contours', black)
cv2.waitKey(0)

# Close all windows
cv2.destroyAllWindows()
