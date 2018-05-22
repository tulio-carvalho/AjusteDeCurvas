reset
f1(x)= 1.561622*x-0.44946
f2(x)=a*x+b
fit f2(x) 'dados.dat' using 1:2 via a,b
plot f2(x) w l lw 2,'dados.dat' using 1:2
plot "dados.dat" w p pt 5,f1(x) t"Ajuste do Programa em C" w l lw 3 lc 4,f2(x) t"Ajuste do Gnuplot" w l lw 4 lc 6
set title "Ajuste de Curvas pelo método dos mínimos quadrados"
set xrange[0:15]
set yrange[0:20]
set key left top
set terminal png size 1024.698 
set output "minimos_quadrados1.png"
replot
