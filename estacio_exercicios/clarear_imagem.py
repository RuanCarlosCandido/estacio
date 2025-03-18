from PIL import Image

img = Image.open('enigma2.png').convert('RGB')

largura, altura = img.size

for x in range(largura):
    for y in range(altura):
        r, g, b = img.getpixel((x, y))
        # Multiplicando componentes por 10, limitando a 255
        r = min(r * 10, 255)
        g = min(g * 10, 255)
        b = min(b * 10, 255)
        img.putpixel((x, y), (r, g, b))

img.save('imagem_clara.png')
img.show()
