# robotic-with-arduino
STETPS:

// Definir os pinos dos motores
// Definir os pinos dos botões
// Definir os pinos do sensor e do atuador

  // Configurar os pinos dos motores como saídas

  // Configurar os pinos dos botões como entradas

  // Configurar o pino do sensor como entrada e do atuador como saída

  // Ler o estado dos botões e ajustar a velocidade dos motores
   // Mover para a esquerda
   // Mover para a direita
   // Mover para frente
   // Mover para trás
   // Parar
  // Verificar a distância do sensor
      // Ativar o atuador
      // Desativar o atuador

Para desenvolver um sistema robótico controlado com Arduino com as funções mencionadas, você precisará de um Arduino Uno ou similar, um driver de motor L293D, dois motores DC, quatro botões, um sensor de distância HC-SR04, um servo motor para acionar a serra elétrica e uma bateria.

Primeiramente, conecte os motores ao driver de motor L293D e conecte o driver ao Arduino. Em seguida, conecte os botões ao Arduino e programe cada um para controlar o movimento do robô. Por exemplo, o botão para frente irá ligar os motores e movê-lo para frente.

Para detectar o robô do oponente, conecte o sensor de distância HC-SR04 ao Arduino e programe-o para medir a distância entre o seu robô e o oponente. Se a distância for menor que 15 cm, acione o servo motor para ligar a serra elétrica.

Por fim, teste o sistema robótico e faça ajustes conforme necessário. Certifique-se de que todas as conexões estejam corretas e que os componentes estejam funcionando adequadamente antes de usar o robô.

STEPPS:

// Define motor pins
// Define the button pins
// Define the sensor and actuator pins

   // Configure motor pins as outputs

   // Configure button pins as inputs

   // Configure the sensor pin as an input and the actuator as an output

   // Read the state of the buttons and adjust the speed of the motors
    // move left
    // Move right
    // move forward
    // move backwards
    // To stop
   // Check sensor distance
       // Activate the actuator
       // Disable the actuator

(To develop an Arduino controlled robotic system with the mentioned functions, you will need an Arduino Uno or similar, an L293D motor driver, two DC motors, four buttons, an HC-SR04 distance sensor, a servo motor to drive the saw electric and a battery.

First, connect the motors to the L293D motor driver and connect the driver to the Arduino. Then connect the buttons to the Arduino and program each one to control the robot's movement. For example, the forward button will turn on the motors and move you forward.

To detect the opponent's robot, connect the HC-SR04 Distance Sensor to the Arduino and program it to measure the distance between your robot and the opponent. If the distance is less than 15 cm, trigger the servo motor to start the chainsaw.

Finally, test the robotic system and make adjustments as needed. Make sure all connections are correct and components are working properly before using the robot.)
