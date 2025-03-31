vertice = []
caras = []
a = 0
while True:
    print("1. Definir los vértices")
    print("2. Definir las caras")
    print("3. Mostrar la figura final")
    print("4. Salir")
    o = int(input("Qué opción desea: "))
    if ( o == 1):
        a = int(input("Ingrese la cantidad de vértices que quiere: "))
        for i in range(a):
            x = int(input(f"Ingrese x del vértice {i+1}: "))
            y = int(input(f"Ingrese y del vértice {i+1}: "))
            z = int(input(f"Ingrese z del vértice {i+1}: "))
            vertice.append([x, y, z])
    elif ( o == 2):
        if (a == 0):
            print("Se necesita un mínimo de 3 vértices para formar una cara")
        elif (a < 3):
            print("La cantidad de vértices no puede ser menor a la cantidad de caras")
        else:
            b = int(input("Ingresa la cantidad de caras que quiere: "))
            for i in range(b):
                k = int(input("Ingrese la cantidad de vértices que tiene su cara: "))
                for i in range(k):
                    c = int(input("Ingrese los índices de los vértices: "))
                    caras.append(c)
    elif ( o == 3):
        if ( a == 0):
            print("Aún no hay datos")
        else:
            for i, j in enumerate(vertice, 1):
                print(f"V{i}: x = {vertice[0]}, y = {vertice[1]}, z = {vertice[2]}")
            for i, j in enumerate(caras, 1):
                print(f"Caras {i}: {caras}")
    elif ( o == 4):
        print("Saliendo del programa")
        break
