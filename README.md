# Task #PC2A: Practica Calificada  
**course:** Programación III  
**unit:** 2  
**cmake project:** prog3_pc2a_lab101_v2025_01
### Indicaciones Específicas

El tiempo límite para la evaluación es 100 minutos.

Cada pregunta deberá ser respondida en un archivo fuente (.cpp) y un archivo cabecera (.h) correspondiente:

 - `fused_transform_reduce.h`
 - `zip_apply_filter.h`  

Deberás subir estos archivos directamente a www.gradescope.com o se puede crear un .zip que contenga todos ellos y subirlo.

### Question #1 - `fused_transform_reduce` (8 points)

Implemente una función template **`fused_transform_reduce`** que reciba los siguientes parámetros:

- Un contenedor secuencial **`Container`** (**`std::vector`**, **`std::list`**, etc.).
- Una lambda **`Map`** que transforme cada elemento del contenedor.
- Una lambda **`Reduce`** que combine los resultados transformados.
- Un valor inicial **`Init`** del tipo de reducción.

El resultado debe ser el valor total reducido después de aplicar la transformación a cada elemento.
  

**Use Cases:** `ver PDF`

### Question #2 - `zip_apply_filter` (12 points)

Implemente una función template **`zip_apply_filter`** que reciba:

- `N` contenedores secuenciales **`Containers...`** del mismo tamaño pero no necesariamente del mismo tipo.
- Una función **`Apply`** que actúe sobre cada grupo de valores (una fila).
- Una función **`Predicate`** que filtre los resultados generados por **`Apply`**.
- El tipo del contenedor de salida (opcional, **`std::vector`** por defecto).

**Use Cases:** `ver PDF`  

**Rúbricas de Evaluación:** `ver PDF`
