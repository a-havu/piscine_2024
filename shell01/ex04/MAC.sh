#!/bin/sh
ifconfig | grep ether | cat -e | awk '{print $2}'