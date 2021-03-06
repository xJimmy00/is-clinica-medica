## Modificar datos de un paciente

**ID**: 07
**Descripción**: Una vez seleccionado el usuario que se desea modificar, el sistema pregunta qué campo desea ser modificado.

**Actores principales**: Secretario

**Precondiciones**:
* El paciente debe existir en el sistema.

**Flujo principal**:
1. El secretario desea modificar los campos pertenecientes al paciente.
1. El secretario selecciona la opción modificar paciente dentro del menú principal.
1. El secretario realiza la búsqueda del paciente mediante DNI.
1. El sistema muestra los campos de ese paciente y pregunta por cuál desea ser modificado.
1. El secretario modifica el campo deseado.
1. El sistema almacena la nueva información.

**Postcondiciones**:

* Se muestra al secretario si desea hacer alguna operación más con el paciente.

**Flujos alternativos**:

* 4.a. Si no existe el paciente buscado, se imprime un mensaje especificando dicho error.