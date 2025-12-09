set title 'Bresenham Line Plot'
set xlabel 'X'
set ylabel 'Y'
set grid
plot 'bres_points.dat' with points pointtype 7 pointsize 1.5 title 'Line'
pause -1
