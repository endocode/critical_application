#!/bin/sh
# 
# Run the critical application
#

# check for the SoC

if grep "Atmel SAMA5" /proc/cpuinfo >/dev/null; then
	# running on the atmel board
	/bin/true
else
	# not running on the atmel board
	echo "Not running on the Atmel board. Stopping."
	exit 0
fi

if $(ls -la /sys/class/leds/d3/brightness > /dev/null 2> /dev/null ); then
	/usr/bin/critical_application
fi

