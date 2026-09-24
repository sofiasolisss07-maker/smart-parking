# smar-parking
1. Definición de la problemática

Problemática:
En los estacionamientos puede ser difícil saber qué lugares están disponibles y cuáles están ocupados. Esto hace que los conductores pierdan tiempo buscando un espacio libre y puede generar desorden dentro del estacionamiento.

Propuesta:
Crear un sistema automatizado con Arduino que detecte si un lugar está ocupado o libre y lo indique mediante luces LED.

2. Requerimientos funcionales

Son las funciones que debe realizar el sistema:

Detectar si el espacio de estacionamiento está ocupado.
Detectar si el espacio está libre.
Encender una luz verde cuando el lugar esté libre.
Encender una luz roja cuando el lugar esté ocupado.
Actualizar el estado del lugar automáticamente cuando cambie la situación.
Mostrar correctamente el estado durante la simulación en Wokwi.
3. Requerimientos no funcionales

Son características que debe cumplir el sistema:

El sistema debe ser fácil de utilizar e interpretar.
Debe responder rápidamente cuando cambie el estado del estacionamiento.
Los componentes deben estar conectados de manera segura.
El código debe ser claro y organizado.
El sistema debe funcionar de manera estable durante la simulación.
El proyecto debe poder implementarse utilizando Arduino y componentes accesibles.
4. Historia de usuario

Como conductor, quiero saber si un lugar de estacionamiento está libre u ocupado mediante luces, para poder encontrar rápidamente un espacio disponible.

5. Elección del proyecto

Nombre del proyecto: Smart Parking 🚗

Tecnología: Arduino + sensores + LEDs.

Funcionamiento:
El sensor detectará la presencia de un vehículo. Si detecta que el lugar está ocupado, se encenderá el LED rojo. Si no detecta ningún vehículo, se encenderá el LED verde.
elementos:
arduino,leds,protoboard,cables:$35,648
sensor ultrasonico:$3.882

