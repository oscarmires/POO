TC1030 - T2 - A01630791
Oscar Miranda Escalante

INSTRUCCIONES PARA COMPILAR

- Utilizar el comando:

g++ -std=c++17 snakes.cpp MyGame.cpp AutoGame.cpp ManualGame.cpp Board.cpp Tile.cpp Dice.cpp Ladder.cpp Snake.cpp Player.cpp

- Para correr el juego en la configuración por defecto:

./a.out

- Los siguientes son ejemplos de comandos para juego personalizado, donde el método main recibe 9 argumentos en el siguiente orden: path tiles snakes ladders penalty reward players turns gametype

./a.out 50 5 5 5 5 5 80 A

./a.out 20 3 3 3 7 2 40 M

./a.out 15 2 2 7 3 3 10 A

DISCUSIÓN
En esta segunda versión de Serpientes y Escaleras, se puede observar la herencia en las clases ManualGame y AutoGame (porque heredan de MyGame) y también en las casillas (Ladder y Snake heredan de Tile).
El polimorfismo se observa en la función start, la cual varía dependiendo si el juego es automático o manual.