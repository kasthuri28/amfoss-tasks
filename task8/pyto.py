from PIL import Image
import pytesseract
img = Image.open('/home/acer/Pictures/expr.png')
text=pytesseract.image_to_string(img)
y=eval(text)
print (y)
