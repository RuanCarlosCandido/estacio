from PIL import Image

img = Image.open('enigma1.png').convert('RGB')

largura, altura = img.size

for x in range(largura):
    for y in range(altura):
        r, g, b = img.getpixel((x, y))
        r = min(r * 10, 255)
        img.putpixel((x, y), (r, 0, 0))

img.show()
