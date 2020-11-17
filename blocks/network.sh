#!/bin/sh

ethStatus="$(cat /sys/class/net/enp0*/operstate)"
wifiStatus="$(cat /sys/class/net/w*/operstate)"
wifiName="$(iwgetid -r)"

if [ $ethStatus = "up" ]; then
	printf " Ethernet"
elif [ $wifiStatus = "up" ]; then
  printf  " $wifiName"
else
	printf " Disconnected"	
fi

##
