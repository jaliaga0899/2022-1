# IIC2133 - Estructuras de Datos y Algoritmos

## 2022-1

Bienvenido al sitio web del curso de Estructuras de Datos y Algoritmos. En esta página podrás encontrar la información administrativa del curso. En el repositorio podrás encontrar código ya preparado por tus ayudantes, junto con los eventuales enunciados de las tareas y las diapositivas de clases.

## Tabla de contenidos

- [IIC2133 - Estructuras de Datos y Algoritmos](#iic2133---estructuras-de-datos-y-algoritmos)
  - [2022-1](#2022-1)
  - [Tabla de contenidos](#tabla-de-contenidos)
  - [Talleres](#talleres)
  - [Material Tareas](#material-tareas)
  - [Clases y Ayudantías](#clases-y-ayudantías)
  - [Equipo](#equipo)
    - [Profesores](#profesores)
    - [Ayudantes](#ayudantes)
  - [Evaluación](#evaluación)
    - [Evaluaciones Escritas](#evaluaciones-escritas)
    - [Tareas](#tareas)
  - [Material Complementario](#material-complementario)
  - [Política de integridad académica](#política-de-integridad-académica)

## Talleres

- [Intro a C por Vicente Errázuriz y Raúl Álvarez](https://github.com/DCCentral-de-Apuntes/intro-C)

- [Capsula de Debugging en GDB](https://youtu.be/RNfVQQEUoMQ)

## Material Tareas

## Clases y Ayudantías

|   Tipo    | Número | Tema | Fecha | Material   |
| :-------: | :----: | :------------------------------------------: | :---: | :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
|  Clase  |  0    |  Introduccion al curso |   07/03/2022  |  [Diapos](https://github.com/IIC2133-PUC/2022-1/blob/master/Clases/00.%20Introduccio%CC%81n%20al%20curso.pdf) |
|  Clase  |  1    |  Selection Sort |   14/03/2022  |  [Diapos Mario](https://github.com/IIC2133-PUC/2022-1/blob/master/Clases/01.%20Selection%20sort%20-%20Mario.pdf) [Diapos Yadran](https://github.com/IIC2133-PUC/2022-1/blob/master/Clases/01.%20Selection%20e%20Insertion%20sort%20-%20Yadran.pdf) |



## Equipo

### Profesores
| Nombre  | Sección | Email |
| :-------------- | :------ | :---------------- |
| Yadran Eterovic | 1  | yadran@ing.puc.cl |
| Mario Droguett | 2  | mario@uc.cl |

### Ayudantes

| Nombre    | Email    | Github |
| :----------------------- | :---------------------- | :------------------------------------------------------- |
| Carlos Paredes (Jefe)   | cparedesr@uc.cl | [@CarloGauss33](https://www.github.com/CarloGauss33) ||

## Evaluación

El curso consta de una parte teórica, evaluada mediante evaluaciones escritas (interrogaciones), y una parte práctica, evaluada mediante tareas de programación en C.

### Evaluaciones Escritas

Habrá 3 interrogaciones, donde se evaluarán los aspectos más teóricos del contenido.

| Evaluación | Fecha |
| :-------------- | :--------- |
| Interrogación 1 | 04/04/2022 |
| Interrogación 2 | 23/05/2022 |
| Interrogación 3 | 30/06/2022 |

### Tareas

Habrá 4 tareas de programación en C, donde deberán resolver un problema complejo y analizarlo en un informe escrito.

| Evaluación | Fecha Publicacion | Fecha Entrega |
| :--------- | :------------ | :------------ |
| Tarea 0    | 10/03/2022    | 27/03/2022    |
| Tarea 1    | Semana 04/04    | 2 semanas |
| Tarea 2    | Semana 02/05     | 2 semanas |
| Tarea 3    | Semana 23/05    | 2 semanas |

La nota final del curso se calcula de la siguiente manera:

```c++
double nota_final()
{
    /* La nota de cada tarea */
    double T0,T1,T2,T3;
    /* La nota de cada interrogación*/
    double I1,I2,I3;

    /* Promedio de tareas */
    double NT = 0.20 * T0 + 0.30 * T1 + 0.25 * T2 + 0.25 * T3;
    /* Promedio de interrogaciones */
    double NI = 0.25 * I1 + 0.30 * I2 + 0.45 * I3;

    /* Nota final */
    double NF = (NT + NI) / 2;

    /* Es necesario tener sobre 3.7 en las evaluaciones escritas y las tareas por separado para aprobar el curso */
    if(NI < 3.7 || NT < 3.7)
    {
  return min(3.9, NF);
    }
    else
    {
  return min(NF, 7);
    }
}
```

## Material Complementario

Las clases y ayudantías realizadas durante el semestre 2021-2 se encuentran [aquí](https://www.youtube.com/playlist?list=PLgIrOsyBCImpDQu30UKrMVSRHf3gW2gKb).

## Política de integridad académica

Este curso se adscribe a la política de integridad académica de la Escuela de Ingeniería y el Departamento de Computación.

---

Los alumnos de la Escuela de Ingeniería de la Pontificia Universidad Católica de Chile deben mantener un comportamiento acorde a la Declaración de Principios de la Universidad. En particular, se espera que **mantengan altos estándares de honestidad académica**. Cualquier acto deshonesto o fraude académico está prohibido; los alumnos que incurran en este tipo de acciones se exponen a un Procedimiento Sumario. Es responsabilidad de cada alumno conocer y respetar el documento sobre Integridad Académica publicado por la Dirección de Docencia de la Escuela de Ingeniería (disponible en SIDING).

Específicamente, para los cursos del Departamento de Ciencia de la Computación, rige obligatoriamente la siguiente política de integridad académica. Todo trabajo presentado por un alumno para los efectos de la evaluación de un curso debe ser hecho individualmente por el alumno, sin apoyo en material de terceros. Por “trabajo” se entiende en general las interrogaciones escritas, las tareas de programación u otras, los trabajos de laboratorio, los proyectos, el examen, entre otros.

**En particular, si un alumno copia un trabajo, o si a un alumno se le prueba que compró o intentó comprar un trabajo, obtendrá nota final 1.1 en el curso y se solicitará a la Dirección de Docencia de la Escuela de Ingeniería que no le permita retirar el curso de la carga académica semestral.**

Por “copia” se entiende incluir en el trabajo presentado como propio, partes hechas por otra persona. **En caso que corresponda a “copia” a otros alumnos, la sanción anterior se aplicará a todos los involucrados**. En todos los casos, se informará a la Dirección de Docencia de la Escuela de Ingeniería para que tome sanciones adicionales si lo estima conveniente. Obviamente, está permitido usar material disponible públicamente, por ejemplo, libros o contenidos tomados de Internet, siempre y cuando se incluya la referencia correspondiente y sea autorizado por los ayudantes.

Lo anterior se entiende como complemento al Reglamento del Alumno de la Pontificia Universidad Católica de
Chile<sup><a name="pucCLBack">[1](#pucCL)</a></sup>. Por ello, es posible pedir a la Universidad la aplicación de sanciones adicionales especificadas en dicho reglamento.

<sub>**<a name="pucCL">[1](#pucCL)</a>**: Reglamento del Alumno de la Pontificia Universidad Católica de Chile disponible en: http://admisionyregistros.uc.cl/alumnos/informacion-academica/reglamentos-estudiantiles [&#8593;](#pucCLBack)</sub>
