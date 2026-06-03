# CPP06 - C++ Casts

## Descripción

Este módulo está enfocado en las diferentes formas de **casting** en C++ y en la conversión entre tipos. A través de varios ejercicios se exploran conceptos como:

- Conversión de tipos escalares.
- Serialización y deserialización de datos.
- Identificación dinámica de tipos en tiempo de ejecución (RTTI).

El proyecto está dividido en tres ejercicios:

- **ex00:** Scalar Conversion.
- **ex01:** Serialization.
- **ex02:** Identify Real Type.

---

## Conceptos aprendidos

- `static_cast`
- `reinterpret_cast`
- `dynamic_cast`
- Conversión de tipos escalares
- RTTI (Run-Time Type Information)
- Polimorfismo
- Herencia
- Serialización de punteros
- Manejo de excepciones

---

## Estructura del proyecto

```text
CPP06/
├── ex00/
│   ├── ScalarConverter.hpp
│   ├── ScalarConverter.cpp
│   ├── main.cpp
│   └── Makefile
│
├── ex01/
│   ├── Serializer.hpp
│   ├── Serializer.cpp
│   ├── Data.hpp
│   ├── main.cpp
│   └── Makefile
│
└── ex02/
    ├── Base.hpp
    ├── A.hpp
    ├── B.hpp
    ├── C.hpp
    ├── Base.cpp
    ├── generate.cpp
    ├── identify.cpp
    ├── main.cpp
    └── Makefile
```

---

# ex00 - Scalar Converter

## Objetivo

Crear una clase capaz de convertir un literal proporcionado como argumento a los siguientes tipos:

- `char`
- `int`
- `float`
- `double`

## Ejemplo

```bash
./convert 42
```

Salida:

```text
char: '*'
int: 42
float: 42.0f
double: 42.0
```

También debe manejar casos especiales:

```bash
./convert nan
./convert nanf
./convert +inf
./convert -inf
./convert +inff
./convert -inff
```

### Conceptos

- Parsing de cadenas
- Conversión de tipos
- Pseudoliterales
- Manejo de excepciones

---

# ex01 - Serialization

## Objetivo

Implementar una clase que permita:

- Serializar un puntero en un entero sin signo (`uintptr_t`).
- Deserializar dicho entero para recuperar el puntero original.

## Estructura

```cpp
struct Data
{
    std::string name;
    int value;
};
```

## Funciones

```cpp
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
```

## Ejemplo

```cpp
Data data;

uintptr_t raw = Serializer::serialize(&data);
Data* ptr = Serializer::deserialize(raw);
```

### Conceptos

- `reinterpret_cast`
- Direcciones de memoria
- Conversión entre punteros e enteros

---

# ex02 - Identify Real Type

## Objetivo

Identificar el tipo real de un objeto derivado a partir de una referencia o puntero a la clase base.

### Jerarquía

```text
Base
├── A
├── B
└── C
```

## Funciones requeridas

```cpp
Base* generate();
void identify(Base* p);
void identify(Base& p);
```

La función `generate()` crea aleatoriamente una instancia de:

- `A`
- `B`
- `C`

Las funciones `identify()` deben determinar correctamente el tipo real del objeto.

## Ejemplo

```text
Generated type: B

identify(pointer): B
identify(reference): B
```

### Conceptos

- Herencia
- Polimorfismo
- RTTI
- `dynamic_cast`
- Excepciones en referencias

---

## Compilación

Entrar en el ejercicio deseado:

```bash
cd ex00
make
```

o

```bash
cd ex01
make
```

o

```bash
cd ex02
make
```

---

## Ejecución

### ex00

```bash
./convert <literal>
```

Ejemplos:

```bash
./convert 0
./convert a
./convert 42.0f
./convert nan
```

### ex01

```bash
./serializer
```

### ex02

```bash
./Base
```

---

## Casts utilizados

| Cast | Uso |
|--------|--------|
| `static_cast` | Conversión segura entre tipos compatibles |
| `reinterpret_cast` | Conversión directa de direcciones de memoria |
| `dynamic_cast` | Identificación de tipos en jerarquías polimórficas |

---

## Compilación obligatoria

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## Normas del proyecto

- Estándar C++98.
- Sin fugas de memoria.
- Uso correcto de los casts de C++.
- Manejo adecuado de excepciones.
- Cumplimiento de la Canonical Orthodox Form cuando corresponda.

---

## Autor

Carlos Raveglia Cuesta
Proyecto realizado como parte del currículo de la escuela 42.
