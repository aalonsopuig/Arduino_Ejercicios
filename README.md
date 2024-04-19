Ejercicios con Arduino para las clases que imparto en la universidad

***
# Parpadeo LED simple

Este programa hace parpadear un LED conectado al pin 8 de Arduino. En el ciclo loop(), enciende el LED durante un segundo y luego lo apaga durante otro segundo, creando así un efecto de parpadeo continuo.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_parpadeo_LED_simple)
* [Simulación TinkerCad](https://www.tinkercad.com/embed/3M3bPJuZezu)
* [Vídeo explicativo corto](https://youtube.com/shorts/9ILAEd1KWLY?feature=share)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/f2060686-241d-4856-a6e8-8b56f27cf7e8)

***
# LED activado por pulsador

Este ejemplo sencillo muestra cómo leer una entrada digital (Pulsador) y activar una salida digital (LED) en función de la anterior.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_LED_y_pulsador)
* [Simulación TinkerCad](https://www.tinkercad.com/things/2WXCKrdEzCV-led-pulsador)
* [Vídeo explicativo corto](https://youtube.com/shorts/opFZMtsbQN8?feature=share)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/b85f563c-3d8e-40dd-a717-fe9f89dc096a)


***
# Parpadeo LED progresivo

Este programa hace parpadear progresivamente el led conectado al pin 6. Para ello genera una señal PWM variable en dicho pin.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_LED_PWM_blink)
* [Simulación TinkerCad](https://www.tinkercad.com/things/8SQf3MCs0XC-blink-progresivo)
* [Vídeo explicativo corto](https://youtube.com/shorts/ALIiVMjG1F0?feature=share)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/844c5df6-cb4a-4fa2-9833-353ada428b8c)

***
# Lectura analógica y envío de valores al PC

Este ejemplo lee un valor analógico, como por ejemplo el de un potenciómetro actuando como divisor de tensión y lo envía al PC, donde puede mostrarlo como un valor o como gráfica de valores.
Nótese que los valores recibidos por el pin analógico varían entre 0 y 1023, debido a que el conversor analógico-digital utilizado por los pines analógicos de arduino es de 10 bits.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_Potenciometro_y_PC)
* [Simulación TinkerCad](https://www.tinkercad.com/things/aR4O5xIxLOv-arduinopotenciometroypc)
* [Vídeo explicativo corto](https://youtube.com/shorts/UDSLEapQHSM?feature=share)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/847aeef6-e03d-412e-be9a-466ee533b993)

***
# Control LED RGB con tres potenciómetros

Este ejemplo lee tres valores analógicos de tres potenciómetros y genera tres señales PWM para controlar la intensidad de los canales R(Red/rojo), G(Green/verde) y B(Blue/azul) de un led multicolor. Utilizamos la función map para convertir la señal analógica de 10 bits en una de pwm de 8 bits:

```c++
IntenR = map(analogRead(pot1),0,1023,0,255);
IntenG = map(analogRead(pot2),0,1023,0,255);
IntenB = map(analogRead(pot3),0,1023,0,255);
```

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_LED_RGB_variable)
* [Simulación TinkerCad](https://www.tinkercad.com/things/f6wgzFWe1Yb-arduino-led-rgb-variable)
* [Vídeo explicativo corto](https://youtube.com/shorts/53BZk5XmW8s?feature=share)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/dbee30bc-ebb0-4ac4-9e4a-ca481d578754)


***
# Lectura de múltiples sensores y envío a PC

El programa de Arduino configura entradas analógicas para leer datos de un potenciómetro, un LDR, y un sensor de temperatura, y comunica estos valores a la computadora mediante serial. Utiliza un pulsador para controlar un LED interno, ofreciendo interacción manual. Adicionalmente, controla un LED externo para crear un efecto de parpadeo, encendiéndolo y apagándolo en intervalos de 100 milisegundos, lo que proporciona una señalización visual dinámica mientras gestiona la entrada de datos sensoriales y la interacción del usuario.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_sensores_y_pc)
* [Simulación TinkerCad](https://www.tinkercad.com/things/3x109VKsHeD-sensores-y-pc)
* [Vídeo explicativo corto](https://youtube.com/shorts/_XR1UtvLUYw?feature=share)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/edf5e7f7-a414-40b8-a3e4-e613874ca3b2)


***
# Control simple de motor mediante PWM con Display

Programa que permite controlar un motor DC mediante un potenciómetro leyendo el valor de este y convirtiéndolo en un valor PWM. Adicionalmente muestra en el display este valor.
La fuente externa alimenta tanto el motor, como arduino. Arduino alimenta a 5v el resto del circuito. El potenciómetro de la izquierda controla el contraste del LCD. Al de la derecha es el utilizado por Arduino como interfaz de usuario para identificar el PWM que queremos generar. Si el motor consume muy poco (<150mA), este se puede alimentad directamente de Arduino, sin utilizar la fuente externa, aunque es altamente recomendable utilizar una fuente externa para evitar posibles daños en el regulador de tensión del Arduino.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_control_motor_PWM_Simple)
* [Simulación TinkerCad](https://www.tinkercad.com/things/7sXboqAGpC0-control-motor-con-pwm-lcd)
* [Vídeo explicativo corto](https://youtu.be/97mUTnVemPs)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/c1128745-59a7-4d73-9e00-cb8a1f47ca35)


***
# Uso de flags para contar sin repetición

Ejemplo de uso de flags (variable estaba_Pulsado) de estado para contar las veces que se pulsa el led, sin que el contador se incremente continuamente en caso de dejar pulsado el botón. 
Se utiliza un LCD de 16x2 caracteres de tipo I2C.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_contador_pulsaciones_con_lcd_i2c)
* [Simulación TinkerCad](https://www.tinkercad.com/things/cUA0Ui6qffv)


![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/e12b91db-7af6-44d6-a32a-109421458959)

***
# Sonar rotacional

Programa que hace girar un servo con un sensor de ultrasonidos montado sobre él. Por cada grado que gira, el sonar mide la distancia y la envía por el puerto serie para graficarla.

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_sonar_rotacional)
* [Simulación TinkerCad](https://www.tinkercad.com/things/lNFQGIqOJld-sonar-rotacional)


![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/0d638ccb-7b4d-4626-a88b-1e4955be0ba3)


***
# Grúa con Arduino

Vamos a montar una grúa con dos servos colocados en configuración pan&tilt. Los servos serán controlados por un Arduino. Utilizaremos un joystick con dos potenciómetros para controlar los servos y así la grúa.

![Grua_arduino](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/4b895039-21da-401f-bcd0-d250f35c45a6)


* [Código fuente y piezas 3D](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_grua_2_servos)
* [Simulación TinkerCad](https://www.tinkercad.com/things/aelj4MkMWm2-grua-2-servos)
* [Vídeo explicativo corto](https://youtube.com/shorts/xqiwwrvN0-8?feature=share)
  

![Tinkercad_sim](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/031e2a53-a040-41c7-9b94-69aca0189a3b)

***

