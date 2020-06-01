TC1030 - T1 - A01630791
Oscar Miranda Escalante

INSTRUCCIONES PARA COMPILAR

- Primero, acceder a la carpeta src
- Utilizar el comando:

g++ -std=c++17 snakes.cpp Board.cpp Dice.cpp MyGame.cpp Player.cpp Tile.cpp

y ./a.out para correr


DISCUSIÓN SOBRE POO

- La clase "MyGame" es la que engloba todo. La diseñé así porque en el mundo real sería como la caja donde se guarda un juego de mesa, que tiene el tablero, dados, fichas, etc.
- MyGame se compone de 2 instancias de Player, 1 Board y 1 Dice
- Board se compone de 30 instancias de Tile (casillas) acomodadas en un vector. Las primeras y las últimas 3 son siempre de tipo N. Las que están en medio pueden ser S, L o N, acomodadas aleatoriamente.
- Decidí solucionar el problema de cambio de turno creando la variable "currentPlayer", la cual apunta ya sea al player1 o al player2, dependiendo de quién toca. Así se puede trabajar sobre un objeto (currentPlayer) sin tener que evaluar si se trata del jugador 1 o el 2 cada vez que se realiza una acción asociada a ellos.
- Para mantener una alta cohesion, los atributos y métodos son inherentes a cada clase. Por ejemplo, el jugador es quien se mueve a sí mismo, por ello el método changePosition le pertenece / el límite de turnos está asociado con el juego en general, por ello es atributo de MyGame / entre otros...