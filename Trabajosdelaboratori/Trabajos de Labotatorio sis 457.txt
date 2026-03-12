# 📚 Proyectos en C++

Este repositorio contiene varios programas desarrollados en **C++** para practicar programación, uso de clases, funciones y estructuras de control.

## 📂 Contenido del repositorio

El repositorio incluye tres programas principales:

### 1️⃣ Juego Piedra, Papel o Tijeras (3 jugadores)

Programa que simula el juego **Piedra, Papel o Tijeras** entre tres jugadores utilizando una **clase `jugador`**.

**Características:**

* Uso de clases
* Métodos `get` y `set`
* Comparaciones con `if`
* Determina el ganador entre 3 jugadores

**Jugadas:**

| Número | Jugada  |
| ------ | ------- |
| 1      | Piedra  |
| 2      | Papel   |
| 3      | Tijeras |

---

### 2️⃣ Juego de Dados

Programa que calcula el puntaje de un juego de dados según ciertas reglas.

**Reglas del juego:**

* **Trío** (los tres dados iguales) → 50 puntos
* **Escalera** (dados consecutivos) → 25 puntos
* **Otro caso** → suma de los dados

**Funciones utilizadas:**

* `EsTrio()` → verifica si los tres dados son iguales
* `EsEscalera()` → verifica si los dados son consecutivos
* `CalcularPuntaje()` → calcula el puntaje
* `ImprimirMarcador()` → muestra el resultado de cada ronda

---

### 3️⃣ Sistema de Cuenta Bancaria

Programa que simula operaciones básicas de una **cuenta bancaria** usando programación orientada a objetos.

**Clase:** `CuentaBancaria`

**Atributos:**

* `id`
* `nroCuenta`
* `saldo`
* `propietario`

**Métodos:**

* `depositar()` → agregar dinero
* `retirar()` → retirar dinero
* `transferencia()` → transferir dinero a otra cuenta
* `verEstado()` → mostrar información de la cuenta

---

## 🛠 Tecnologías utilizadas

* Lenguaje: **C++**
* Librería estándar: `iostream`

---

## ▶️ Cómo compilar y ejecutar

1. Compilar el programa:

```
g++ archivo.cpp -o programa
```

2. Ejecutar el programa:

```
./programa
```

---

## 👨‍💻 Autor

Proyecto desarrollado por **Magallany** para práctica de programación en **C++**.
