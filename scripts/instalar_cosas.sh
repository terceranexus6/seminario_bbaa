#!/bin/bash

echo "Preparando update para la instalación..."
sudo apt update
sleep 1
echo "Preparandose para instalar arduino..."
sudo apt install arduino

echo "Arduino instalado correctamente..."
read -p"¿Instalar la libreria de python, también? S/N" RES

if [ "$RES" == "Y" ]
then
    echo "Preparandose para instalar la libreria de python..."
    pip install --user arduino-python
    pip install --user pyserial
else
    echo "Terminando instalación..."
fi

echo "Terminado. :) Disfruta"
