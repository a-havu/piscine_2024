#!/bin/sh
id -nG $FT_USER | tr ' ' ',' | cat -e
