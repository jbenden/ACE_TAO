#!/bin/sh
#
# $Id$
#

gnuplot <<_EOF_ >/dev/null 2>&1
  set xdata time
  set timefmt '%Y/%m/%d-%H:%M'
  set xlabel 'Date (MM/DD)'
  set ylabel 'Size (KBytes)'
  set terminal png small color
  set output "$2"
  plot '$1' using 1:2 title '$3' w l
  exit
_EOF_

