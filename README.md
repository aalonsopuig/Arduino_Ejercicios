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

* [Código fuente](https://github.com/aalonsopuig/Arduino_Ejercicios/tree/main/Arduino_control_motor_PWM_Simple)
* [Simulación TinkerCad](https://www.tinkercad.com/things/7sXboqAGpC0-control-motor-con-pwm-lcd)

![image](https://github.com/aalonsopuig/Arduino_Ejercicios/assets/57196844/00507ec8-80b2-437a-a496-0236c8b2ff17)


***
