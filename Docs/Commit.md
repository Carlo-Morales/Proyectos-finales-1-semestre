## ✏️Apuntes para pushear commits
Para pushear sus commits es necesario que realice los siguientes pasos:


### 1. 🌞Asegúrese de estar al Día 
-   Una vez adentro de VS asegurarse de estar en la rama Develop para hacer su Git pull.
    - __git checkout Develop__
    - __git pull__

### 2. 🌲Cree una Rama con la estructura siguiente:

-   Si desea realizar una tarea su rama debe llamarse algo así *Task/Task_n*. Si desea corregir algún error o alguna otra cosa su rama debe llamarse algo así *Fix/Issue_n*. Donde *n* sea el id de la tarea o error.
    - __git checkout -b__  *NOMBRE DE LA RAMA*
### 3. 👷Realizar su  trabajo
-   Realice sus acciones correspondientes en su rama, __Nunca en main o Develop!!__

### 4. 🎯Hacer el commit
-   Comandos a seguir para hacer su commit (Todo desde su rama):
    - __ctrl + s__ para guardar sus cambios.
    - __git status__
    - __git add .__ (no se les olvide el punto despues del add, como se muestra) Esto es para preparar los cambios a commitear.
    - __git status__ si se añadieron bien los cambios, se podrá observar como estan listos para hacer commit.
    - __git commit -m__  "*PEQUEÑA DESCRIPCIÓN DEL COMMIT*"
        - si al hacer git status antes de hacer commit les aparece que se añadieron archivos de vscode com algunos de naturaleza .json entonces es preferible hacer commit desde la extensión _SOURCE CONTROL_ y borrar los archivos no deseados de commitear.
### 5. 🦾Hacer su Push
-   Su push tiene que ser inmediatamente después del commit, siguiendo el siguiente comando en la terminal
    - __git push origin__ *LA RAMA EN LA QUE SE ENCUENTRAN*
-   Si todo sale en orden, el siguiente paso es hacer su pull request desde *github*.
