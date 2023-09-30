
Fractals Portfolio
Forest Pearson
June 2023
1 Entires
1.1 Complex Choice: Burning Ship
Figure 1: Burning Ship Fractal
Paradigm & Mathematical Description: The burning ship itself is a frac-
tal described by Michael Michelitsh and Otto E Rossler in 1992 where like the
mandelbrot it makes use of both real and imaginary numbers for its complex
values. The difference here being that the iterating function isz=abs(z)^2 +c
where the imaginary values are set to their absolute values instead ofz=z^2 +c
and diveregence is checked bycabs(z)> 2 .0. The initial complex number set of
cz, zyis obtained by mapping each (x, y) point on the screen from it’s respective
position with the functons:
cx= 2∗((x−(swidth/ 4 .0))∗(swidth/ 4 .0)) andcy= 2∗((y−(sheight/ 2 .0))∗
(sheight/ 2 .0))
The screen itself is broken up into two halves, with the right containing
the full fractal and the left containing the zoomed location around a chosen
point. This zoom is created by four x and y max/min variables combined with
a fed in zoom value from 0-1. This is used to create the real and imaginary
values in conjunction with the previous position function. Ending up with
dx= (xmax−xmin)/(swidth/ 2 .0) andreal=xmin+x∗dxwithin the loop
for x while a corresponding counterpart is created for y. This then loops through
the designated space to create the zoomed in affect.
Artistic Description: For this fractal I kept the design simple to show of
the complexity created in the burning ship fractal set. I focused on setting the
red-orange color for divergence for the burning theme it’s named after and spent
my time focusing on improving the interactiveness of the fractal. Part of the fun
I found is exploring this fractal as if it’s a new world, zooming in and traveling
across it. These capabilities are what I enabled with the controls seen in figure
1 where it is currently zoomed in on the most iconic part of the burning ship
seen on the left antenna.
The coloring for depth here is done by multiplying set red and green values
between 0-1 against the valuesf= 1. 0 ∗k/repswhere reps is the max depth
and k is the current diverging or set depth. This allows it to naturally progress
from one shade to another then eventually to black as it fully diverges for both
the main fractal and the zoom.
1.2 Complex: Mandelbrot and Juliet Exploration
Figure 2: Mandelbrot And Juliet Fractal
Paradigm & Mathematical Description: The mandelbrot fractal is a set
of complex numbers discovered by Benoit Mandelbrot in 1980 while working at
IBM, wheras the Juliet set was discovered by Gaston Julia and Pierre Fatou
where they were then popularized by Benoit Mandelbrot due to their close na-
ture. For mathmatics the mandelbrot takes a simplified version of what I did
in the burning ship with the iterating function beingz=z^2 +cwhile still using
cabs(z)> 2 .0 to check for divergence. The variables cz and cy are still obtained
in the same position functions:
cx= 2∗((x−(swidth/ 4 .0))∗(swidth/ 4 .0)) andcy= 2∗((y−(sheight/ 2 .0))∗
(sheight/ 2 .0))
The Juliet here though takes in the position of a single (x, y) pixel decided
by the cursor into the cy and cx functions to create a complex numberc=
mx+my∗I. This with a passed in depth and zoom is then fed into the julia
which recursively travels through the left hand half of the screens width and
height while iterating withz=z^2 +cwhere c is a constant not recalculated.
Artistic Description: For this fractal I once again kept the design simple to
show of the complexity created here in the Mandelbrot and Juliet together. I
setup a gentle blue color for divergence spent my time focusing on improving the
interactiveness across both the fractals. I found it mesmerizing to explore the
edges of the Mandelbrot and see the vastly different Juliet sets created, which
you can see in Figure 2 where I discovered a spiraling pattern different from a
dozen others I had previously seen.
The coloring for depth here is once again done by multiplying a set blue color
value between 0-1 against the valuesf= 1. 0 ∗k/repswhere reps is the max
depth and k is the current diverging or set depth. This allows it to naturally
progress from one shade to another then eventually to black as it fully diverges.
1.3 Lsys: A peaceful night
Figure 3: Lsys Fern Fractal
Paradigm & Mathematical Description: For this fractal the Lindenmayer
Systems was discovered by Aristid Lindenmayer in 1968 during his time as
a botanist at the University of Utrecht. The Lindenmayer system creates a
formal grammer production system making use of rules to recursively build a
progressively larger string dependent on depth. Here this sytem was used with
an axiom A and two rulesA−> F−[A]−−A++[++A] andF−> F Fwhere +
and−move the angle of the system clockwise or counterclockwise respectively,
[ and ] push and pop the current vector data, then finally if a character such
as F or A is encounted the direction is moved along a preset length directed by
the mentioned angle values.
Artistic Description: For this fractal I created a solitary fern bush among a
starry night and a moon shining through the background. I did this in order to
highlight the natural and organic style that can be generated by such a simplistic
formal grammar. Showcasing how such natural designs seen in nature all around
us can be recreated using pure mathematics, lending thought to how the world
around us may take inspiration from similar mathematical principles in its own
way.
Beyond that the stars are simply randomly generated Gpoints for a set amount
between the screens width and height while the moon and planet are offset filled
circles of various sizes.
1.4 Recursive: A snowy wonderland
Figure 4: Recursive Koch Snowflake Fractal
Paradigm & Mathematical Description: For this fractal the snowflake
is an exploration of the Koch Curve discovered by Helge von Koch in a con-
structible geometry paper written in 1904. The koch curve here is generated
using a recursive function from two points in essence on a single line (p 1 , p 2 ),
these points then create a a third segment with pointsp 3 , p 4 evenly between
them and a additional pointp 3 to create an equilatoral triangle between points
(p 3 , p 4 , p 5 ). The pointp 5 here can be calculated by making use of sin and cos in
the functionp 5 x=p 3 x+ (p (^4) x−p (^3) x)∗cos(P I/ 3 .0)−(p 4 y−p 3 y)∗sin(P I/ 3 .0)
andp 5 y=p 3 y+ (p (^4) x−p (^3) x)∗sin(P I/ 3 .0)−(p 4 y−p 3 y)∗cos(P I/ 3 .0). This

can then be repeated recursively for each segment between two points to create
the geometric Koch pattern we know. For the snowflake itself the Koch curve
is started three times upon an equilateral triangle consisting of three passed
points, leading to the design seen above.
Artistic Description: For this fractal I envisioned a late snowy night here in
Portland, staring out into the dark night with large clumpy flakes visible only
due to the light peaking through the window with you. A simple time where
you can simply bask in the nature around you.
For how this is setup the initial equilateral triangles and then snowflakes
are given random locations and sizes across the screen where they are then
generated for a depth of 5. This is combined with a subtle blue gradient taking
the height of the screen as a modifier to the rgb 0-1 values.
1.5 IFS: An initial card
Figure 5: IFS Fractal
Paradigm & Mathematical Description: For this fractal the Iterated
Function System were discovered formaly by John E. Hutchinson in 1981. This
is a method of creating fractals that can be considered self-similar, where they
themselves can be seen as the repeating pattern. For this fractal my initials
were drawn down using a graph sheet to create percise fractions upon which
I could generate the fractal. This is done by randomly selecting from a set of
rules that will scale and translate a shared position where scale determine the
size based upon a fraction given and translate will move the position by given
fractions as well. These repeatedly processed rules will then generate a pattern
based upon the scaling, translating, and rotating, setup among them.
Artistic Description: For this fractal it is a simple card with my initials upon
it, with different rules containing unique colors to showcase the functionality of
how the iterated function system works in its random selection of the rules.
You can see how depending upon the (x, y) scaling letters appear streched or
shrunked, allowing for a more percise fit into the letters themselves.All of this
is then highlighted with a simple gold border.
2 Code
2.1 Complex Choice: Burning Ship
1 /∗
2 #Forest Pearson
3 #Fractals course
4 #06/14/
5 ∗/
6 #include ”FPToolkit. c”
7 #include<stdio. h>
8 #include<math. h>
9 #include<complex. h>
10 #include<tgmath. h>
11
12 const int swidth = 1200;
13 const int sheight = 600;
14
15 // burningShip v a r i a b l e s
16 int reps = 50;
17 double cx , cy ;
18 complex c , z ;
19 double sr , sg , sb ;
20 double er , eg , eb ;
21 double red , g , blue ;
22
23 // point coordinates
24 double p [ 2 ] ;
25
26 void burningShip () {
27 sr = 0.0 ; sg = 0.0 ; sb = 0.0 ;
28 er = 1.0 ; eg = 0.31 ; eb = 0.0 ;
29 // i t e r a t e through each p i x e l of window
30 f o r ( int x = 0; x<swidth /2; x++){
31 f o r ( int y = 0; y<sheight ; y++){

32 // map to coordinating complex number
33 cx = 2∗((x−(swidth /4.0) ) /( swidth /4.0) ) ;
34 cy = 2∗((y−(sheight /2.0) ) /( sheight /2.0) ) ;
35 c = cx + cy∗I ;
36 z = 0;
37 int k = 0;
38
39 f o r (k = 0; k< reps ; k++){
40 z = ( cabs ( c r e a l ( z ) )+cabs ( cimag ( z ) )∗I )∗( cabs ( c r e a l ( z ) )+cabs (
cimag ( z ) )∗I )+c ;
41 i f ( cabs ( z )> 2.0){
42 break ;
43 }
44 }
45 double s f = 1.0∗k/ reps ;
46 s f = pow( sf , 0. 5 ) ;
47 red = sr + s f∗( er−sr ) ;
48 g = sg + s f∗( eg−sg ) ;
49 blue = sb + s f∗( eb−sb ) ;
50 Grgb ( red , g , blue ) ;
51 Gpoint (x+(swidth /2) , sheight−y) ;
52 // Gpoint (x+(swidth /2) ,y) ;
53 }
54 }
55 }
56 void zoom( double zoom , double a , double b){
57 double xmin = a−zoom ;
58 double xmax = a + zoom ;
59 double ymin = b−zoom ;
60 double ymax = b + zoom ;
61 double dx = (xmax−xmin) / ( swidth /2.0) ;
62 double dy = (ymax−ymin) / ( sheight ) ;
63 int x , y ;
64 f o r (x = 0; x<( swidth /2.0) ; x++){
65 f o r (y = 0; y<sheight ; y++){
66 double r e a l = xmin + x ∗ dx ;
67 double imag = ymin + y ∗ dy ;
68 c = r e a l + imag ∗ I ;
69 z = 0;
70 int k = 0;
71 f o r (k = 0; k< reps ; k++){
72 z = ( cabs ( c r e a l ( z ) )+cabs ( cimag ( z ) )∗I )∗( cabs ( c r e a l ( z ) )+cabs (
cimag ( z ) )∗I )+c ;
73 i f ( cabs ( z )> 2.0){
74 break ;
75 }
76 }
77 double s f = 1.0∗k/ reps ;
78 s f = pow( sf , 0. 5 ) ;
79 red = sr + s f∗( er−sr ) ;
80 g = sg + s f∗( eg−sg ) ;
81 blue = sb + s f∗( eb−sb ) ;
82 Grgb ( red , g , blue ) ;
83 Gpoint (x , sheight−y) ;
84 }
85 }
86 }

87 int main (){
88 G init graphics ( swidth , sheight ) ;
89 Grgb (1 ,1 ,1) ;
90 Gclear () ;
91 burningShip () ;
92 zoom (1.0 ,0 ,0) ;
93 int key ;
94 double zoomLevel = 0. 1 ;
95 p [ 0 ] = 900.00;
96 p [ 1 ] = 284.00;
97 Grgb (1 ,1 ,1) ;
98 Gdrawstring ( ”Q = Quit” , swidth−100, sheight−15) ;
99 Gdrawstring ( ”Space = Select ” , swidth−100, sheight−30) ;
100 Gdrawstring ( ”Up = +Zoom” , swidth−100, sheight−45) ;
101 Gdrawstring ( ”Down =−Zoom” , swidth−100, sheight−60) ;
102 char s t r [ 1 0 0 ] ;
103 while (1){
104 Gdrawstring ( ”Q = Quit” , swidth−100, sheight−15) ;
105 Gdrawstring ( ”Space = Select ” , swidth−100, sheight−30) ;
106 Gdrawstring ( ”Up = +Zoom” , swidth−100, sheight−45) ;
107 Gdrawstring ( ”Down =−Zoom” , swidth−100, sheight−60) ;
108 key = Gwaitkey () ;
109 i f ( key == 65362){
110 zoomLevel = zoomLevel + zoomLevel∗0. 1 ;
111 }
112 i f ( key == 65364){
113 zoomLevel = zoomLevel−zoomLevel∗0. 1 ;
114 }
115 i f ( key == 32){
116 Gwaitclick (p) ;
117 }
118 i f ( key == 113){
119 break ;
120 }
121 Grgb (1 ,1 ,1) ;
122 Gclear () ;
123 burningShip () ;
124 Grgb (1 ,1 ,1) ;
125 G f i l l c i r c l e (p [ 0 ] , p [ 1 ] , 3 ) ;
126 double mx = 2∗((( p[0]−( swidth /2) )−(swidth /4.0) ) /( swidth
/4.0) ) ;
127 double my = 2∗((( sheight−p [ 1 ] )−(sheight /2.0) ) /( sheight /2.0)
) ;
128 zoom( zoomLevel , mx, my) ;
129 Grgb (1 ,1 ,1) ;
130 s p r i n t f ( str , ”%f ” , mx) ;
131 Gdrawstring ( ”X: ” , swidth−90 ,45) ;
132 Gdrawstring ( str , swidth−75 ,45) ;
133 s p r i n t f ( str , ”%f ” , my) ;
134 Gdrawstring ( ”Y: ” , swidth−90 ,30) ;
135 Gdrawstring ( str , swidth−75 ,30) ;
136
137 }
138 // save f i l e
139 Gsave tobmpfile ( ” S h i p p o r t f o l i o .bmp” ) ;
140
141 }

2.2 Complex: Mandelbrot Exploration
1 /∗
2 #Forest Pearson
3 #Fractals course
4 #06/14/
5 ∗/
6 #include ”FPToolkit. c”
7 #include<stdio. h>
8 #include<math. h>
9 #include<complex. h>
10 #include<tgmath. h>
11
12 const int swidth = 1200;
13 const int sheight = 600;
14
15 // mandelbrot v a r i a b l e s
16 int reps = 50;
17 double cx , cy ;
18 complex c , z ;
19 double sr , sg , sb ;
20 double er , eg , eb ;
21 double red , g , blue ;
22
23 // point coordinates
24 double p [ 2 ] ;
25
26 void mandelbrot () {
27 sr = 0.0 ; sg = 0.0 ; sb = 0.0 ;
28 er = 0.0 ; eg = 0.0 ; eb = 1.0 ;
29 // i t e r a t e through each p i x e l of window
30 f o r ( int x = 0; x<swidth /2; x++){
31 f o r ( int y = 0; y<sheight ; y++){
32
33 // map to coordinating complex number
34 cx = 2∗((x−(swidth /4.0) ) /( swidth /4.0) ) ;
35 cy = 2∗((y−(sheight /2.0) ) /( sheight /2.0) ) ;
36 c = cx + cy∗I ;
37 z = 0;
38 int k ;
39 f o r (k = 0 ; k< reps ; k++){
40 z = z∗z + c ;
41 i f ( cabs ( z )>2) { // diverged
42 break ;
43 }
44 }
45 double s f = 1.0∗k/ reps ;
46 s f = pow( sf , 0. 5 ) ;
47 red = sr + s f∗( er−sr ) ;
48 g = sg + s f∗( eg−sg ) ;
49 blue = sb + s f∗( eb−sb ) ;
50 Grgb ( red , g , blue ) ;
51 Gpoint (x+(swidth /2) ,y) ;
52 }
53 }
54 }
55

56 int j u l i a R e c u r s i v e ( f l o a t x , f l o a t y , int r , int depth , int max,
double complex c , double complex z ){
57 double s f = 1.0− ( ( ( ( max−depth )∗(max−depth ) )%(max∗max) ) /255) ;
58 s f = pow( sf , 0. 3 ) ;
59 i f ( cabs ( z )>2) {
60 depth = 0;
61 }
62 i f ( sqrt (pow(( x−( swidth / 2) / 2) , 2) + pow(( y−sheight / 2)
, 2) )>sheight / 2) {// Creates encompasing c i r c l e
63 Grgb (0 ,0 ,0) ;
64 Gpoint (x , y) ;
65 }
66 i f ( depth<max / 4) {
67 double t e s t = 1.0∗depth/max;
68 t e s t = pow( test , 0.3) ;
69 blue = sb + t e s t∗( eb−sb ) ;
70 Grgb (0 ,0 , blue ) ;
71 Gpoint (x , y) ;
72 return 0;
73 }
74 j u l i a R e c u r s i v e (x , y , r , depth −1 , max, c , cpow( z , 2) + c ) ;
75 }
76 void j u l i a s e t ( int depth , int r ){
77 f o r ( f l o a t x = ( ( ( swidth / 2) / 2) )−sheight / 2; x< ( ( (
swidth / 2) / 2) ) + sheight / 2; x += 1){
78 f o r ( f l o a t y = 0; y<sheight ; y += 1) {
79 j u l i a R e c u r s i v e (x , y , r , depth , depth , c , (2 ∗ r ∗ (( x−
( swidth / 2) / 2) ) / sheight ) + (2 ∗ r ∗ (y− sheight / 2) /
sheight ) ∗ I ) ;
80 }
81 }
82 }
83 int main (){
84 G init graphics ( swidth , sheight ) ;
85 Grgb (1 ,1 ,1) ;
86 Gclear () ;
87 mandelbrot () ;
88 c = −0.766667 + 0.100000∗I ;
89 j u l i a s e t (100 ,2) ;
90 int key ;
91 Grgb (1 ,1 ,1) ;
92 Gdrawstring ( ”Q = Quit” , swidth−100, sheight−15) ;
93 Gdrawstring ( ”Space = Select ” , swidth−100, sheight−30) ;
94 while (1){
95 Grgb (1 ,1 ,1) ;
96 Gdrawstring ( ”Q = Quit” , swidth−100, sheight−15) ;
97 Gdrawstring ( ”Space = Select ” , swidth−100, sheight−30) ;
98 key = Gwaitkey () ;
99 i f ( key == 113){
100 break ;
101 }
102 Gwaitclick (p) ;
103 Grgb (1 ,1 ,1) ;
104 Gclear () ;
105 mandelbrot () ;
106 Grgb (1 ,1 ,1) ;
107 G f i l l c i r c l e (p [ 0 ] , p [ 1 ] , 3 ) ;

108 double mx = 2∗((( p[0]−( swidth /2) )−(swidth /4.0) ) /( swidth
/4.0) ) ;
109 double my = 2∗((p[1]−( sheight /2.0) ) /( sheight /2.0) ) ;
110 c = mx + my∗I ;
111 p r i n t f ( ” ’X, ’% f\n” , mx) ;
112 p r i n t f ( ” ’Y, ’% f\n” , my) ;
113 Grgb (1 ,1 ,1) ;
114 j u l i a s e t (100 , 2) ;
115 }
116 //Save f i l e
117 Gsave tobmpfile ( ” MandelPortfolio .bmp” ) ;
118
119 }

2.3 Lsys: A peaceful night
1 /∗
2 #Forest Pearson
3 #Fractals course
4 #06/14/
5 ∗/
6 #include ”FPToolkit. c”
7 #include<stdio. h>
8 #include<math. h>
9 #include<complex. h>
10 #include<tgmath. h>
11 #define MAXSIZE 1000000
12
13 typedef struct {
14 char nonterminal ;
15 char rule [ 1 0 0 ] ;
16 } Production ;
17
18 typedef struct {// Struct to track s t a t e s
19 double x [MAXSIZE ] ;
20 double y [MAXSIZE ] ;
21 double d [MAXSIZE ] ; // Direction of t u r t l e
22 int xI ;
23 int yI ;
24 int aI ;
25 } Stack ;
26
27 Stack stack ;
28 Production prods [ 1 0 ] ;
29 char axiom [ 2 ] ={’A’ , ’\0 ’};
30 char derivation [MAXSIZE] ={’\0 ’};
31 double d i r e c t i o n = 0;
32 double cur [ 2 ] ;
33
34 void push () {
35 i f ( stack. xI<MAXSIZE−1) {
36 stack. xI += 1;
37 stack. x [ stack. xI ] = cur [ 0 ] ;
38 }
39 i f ( stack. yI<MAXSIZE−1) {
40 stack. yI += 1;
41 stack. y [ stack. yI ] = cur [ 1 ] ;
42 }
43 i f ( stack. aI<MAXSIZE−1) {
44 stack. aI += 1;
45 stack. d [ stack. aI ] = d i r e c t i o n ;
46 }
47 }
48
49 void pop () {
50 i f ( stack. xI >=0) {
51 cur [ 0 ] = stack. x [ stack. xI ] ;
52 stack. xI −=1;
53 }
54 i f ( stack. yI>= 0) {
55 cur [ 1 ] = stack. y [ stack. yI ] ;
56 stack. yI−= 1;
57 }
58 i f ( stack. aI>= 0) {
59 d i r e c t i o n = stack. d [ stack. aI ] ;
60 stack. aI−= 1;
61 }
62 }
63
64 void autoFit ( int swidth , int sheight , double angle , double
mainAngle , double ∗ i d e a l P o s i t i o n ) {
65 double xMin=0; double yMin=0;
66 double xMax=0; double yMax=0;
67 double dX=0; double dY=0;
68 double tempX = 0.9∗swidth ;
69 double tempY = 0.9∗sheight ;
70 double next [ 2 ] ;
71
72 int i = 0;
73 d i r e c t i o n = mainAngle ;
74 cur [ 0 ] = 0;
75 cur [ 1 ] = 0;
76
77 while ( derivation [ i ] != ’\0 ’ ) {
78 i f ( derivation [ i ] == ’ [ ’ ) {
79 push () ;
80 }
81 e l s e i f ( derivation [ i ] == ’ ] ’ ) {
82 pop () ;
83 }
84 e l s e i f ( derivation [ i ] == ’−’ ) {
85 d i r e c t i o n−= angle ;
86 }
87 e l s e i f ( derivation [ i ] == ’+’ ) {
88 d i r e c t i o n += angle ;
89 }
90 e l s e i f (( derivation [ i ]>= ’A’ && derivation [ i ]<=’Z ’ ) | |
derivation [ i ] == ’ f ’ ) {
91 next [ 0 ] = cur [ 0 ] + cos ( d i r e c t i o n ) ;
92 next [ 1 ] = cur [ 1 ] + sin ( d i r e c t i o n ) ;
93 cur [ 0 ] = next [ 0 ] ;
94 cur [ 1 ] = next [ 1 ] ;
95

96 i f ( cur [ 0 ] <xMin) xMin = cur [ 0 ] ; // Builds outer parameters
while comparing
97 i f ( cur [ 0 ] >xMax) xMax = cur [ 0 ] ;
98 i f ( cur [ 1 ] <yMin) yMin = cur [ 1 ] ;
99 i f ( cur [ 1 ] >yMax) yMax = cur [ 1 ] ;
100 }
101 i ++;
102 }
103 dX = xMax−xMin ; // Create the bounding square
104 dY = yMax−yMin ;
105 i f (dY>dX) {
106 tempX = dX∗ (tempY / dY) ;
107 }
108 e l s e {
109 tempY = dY∗ (tempX / dX) ;
110 }
111 i d e a l P o s i t i o n [ 0 ] = 0.5 ∗ ( swidth−tempX) ;
112 i f (xMin<0) i d e a l P o s i t i o n [ 0 ]−= (xMin ∗ (tempX/dX) ) ;
113 i d e a l P o s i t i o n [ 1 ] = 0.5 ∗ ( sheight−tempY) ;
114 i f (yMin<0) i d e a l P o s i t i o n [ 1 ]−= (yMin ∗ (tempY/dY) ) ;
115 i d e a l P o s i t i o n [ 2 ] = tempX / dX;
116 }
117
118 void s t r i n g I n t e r p r e t e r ( int pos [ 2 ] , double length , double angle ,
double mainAngle ) {
119 d i r e c t i o n = mainAngle ;
120 cur [ 0 ] = pos [ 0 ] ;
121 cur [ 1 ] = pos [ 1 ] ;
122 double next [ 2 ] ;
123 int i = 0;
124
125 while ( derivation [ i ] != ’\0 ’ ) {//Loop through the i n s t r u c t i o n s
without the need to determine bounds.
126 i f ( derivation [ i ] == ’ [ ’ ) {
127 push () ;
128 }
129 e l s e i f ( derivation [ i ] == ’ ] ’ ) {
130 pop () ;
131 }
132 e l s e i f ( derivation [ i ] == ’−’ ) {
133 d i r e c t i o n−= angle ;
134 }
135 e l s e i f ( derivation [ i ] == ’+’ ) {
136 d i r e c t i o n += angle ;
137 }
138 e l s e i f (( derivation [ i ]>= ’A’ && derivation [ i ]<=’Z ’ )| |
derivation [ i ] == ’ f ’ ) {
139 next [ 0 ] = cur [ 0 ] + length ∗ cos ( d i r e c t i o n ) ;
140 next [ 1 ] = cur [ 1 ] + length ∗ sin ( d i r e c t i o n ) ;
141 Gline ( cur [ 0 ] , cur [ 1 ] , next [ 0 ] , next [ 1 ] ) ;
142 cur [ 0 ] = next [ 0 ] ;
143 cur [ 1 ] = next [ 1 ] ;
144 }
145 i ++;
146 }
147 }
148

149 void stringBuilder ( int curr , int max) {
150 i f ( derivation [ 0 ] == ’\0 ’ ) {
151 strcpy ( derivation , axiom ) ;
152 }
153 i f ( curr == max){//Retrun condition f o r recursion
154 return ;
155 }
156
157 int rule =0;
158 char cur [ 2 ] ; cur [ 1 ] = ’\0 ’ ;
159 char temp [MAXSIZE ] ;
160 int i = 0;
161 int j = 0;
162 while ( derivation [ i ] != ’\0 ’ ) {
163 cur [ 0 ] = derivation [ i ] ;
164 while ( j <2 && rule == 0) {//Checks r u l e s
165 i f ( derivation [ i ] == prods [ j ]. nonterminal ) {
166 s t r c a t (temp , prods [ j ]. rule ) ;
167 rule = 1;
168 }
169 j++;
170 }
171 i f ( rule == 0) s t r c a t (temp , cur ) ;
172 i ++;
173 j = 0;
174 rule = 0;
175 }
176 strcpy ( derivation , temp) ;
177 stringBuilder ( curr +1, max) ; //Next process of the rule upon i t s e l f
178 }
179
180 int main () {
181 double length ;
182 int swidth = 800; int sheight = 800;
183 Ginit graphics ( swidth , sheight ) ;
184
185 Grgb (0.039 , 0.125 , 0.352) ; // Generate the moon , ground , and s t a r s
.
186 Gclear () ;
187 Grgb (255/255.0 ,237/255.0 ,188/255.0) ;
188 G f i l l c i r c l e ( swidth /4 , sheight−sheight /6 , 50) ;
189 f o r ( int i= 0; i<1000; i++){
190 Gpoint ( rand ()%swidth , rand ()%sheight ) ;
191 }
192 Grgb (63/255.0 ,49/255.0 ,81/255.0) ;
193 G f i l l c i r c l e ( swidth /2 , −825, 1000) ;
194
195 // build the s t r i n g and populate i t
196 prods [ 0 ]. nonterminal = ’A’ ;
197 strcpy ( prods [ 0 ]. rule , ”B−[[A]+A]+B[+BA]−A” ) ;
198 prods [ 1 ]. nonterminal = ’B ’ ;
199 strcpy ( prods [ 1 ]. rule , ”BB” ) ;
200 stringBuilder (0 , 7) ;
201 stack. x [ 0 ] = ’\0 ’ ;
202 stack. y [ 0 ] = ’\0 ’ ;
203 stack. d [ 0 ] = ’\0 ’ ;
204 stack. xI =−1;

205 stack. yI =−1;
206 stack. aI =−1;
207
208 int pos [ 2 ] ;
209 double i d e a l P o s i t i o n [ 3 ] ;
210 double mainAngle = MPI/ 2. 0 ; // Vertical
211 autoFit ( swidth , sheight , MPI /6.0 , mainAngle , i d e a l P o s i t i o n ) ; //
Determines Ideal po si tio n f o r demensions/placement
212 pos [ 0 ] = i d e a l P o s i t i o n [ 0 ] ;
213 pos [ 1 ] = i d e a l P o s i t i o n [ 1 ] ;
214 length = i d e a l P o s i t i o n [ 2 ] ;
215
216 Grgb (0.15 , 0.35 , 0.01) ; //Draws the fern based upon i d e a l
parameters.
217 s t r i n g I n t e r p r e t e r ( pos , length , MPI /6.0 , mainAngle ) ;
218
219 int key ;
220 key = Gwaitkey () ;
221 //Save to f i l e
222 Gsave tobmpfile ( ” l S y s P o r t f o l i o .bmp” ) ;
223
224 return 0;
225 }

2.4 Recursive: A snowy wonderland
1 /∗
2 #Forest Pearson
3 #Fractals course
4 #06/14/
5 ∗/
6 #include ”FPToolkit. c”
7 #include<stdio. h>
8 #include<math. h>
9 #include<complex. h>
10 #include<tgmath. h>
11
12 #include ”FPToolkit. c”
13
14
15
16 void koch ( double pOne [ ] , double pTwo [ ] , int curr , int dep ) {
17 double a [ 2 ] , b [ 2 ] , c [ 2 ] , t [ 2 ] ;
18 i f ( curr == dep ){
19 return ;
20 }
21
22 a [ 0 ] = pOne [ 0 ] + ( 1. 0 / 3. 0 ) ∗ (pTwo [ 0 ] −pOne [ 0 ] ) ; // Determine a , t ,
b and c
23 a [ 1 ] = pOne [ 1 ] + ( 1. 0 / 3. 0 ) ∗ (pTwo [ 1 ] −pOne [ 1 ] ) ;
24 t [ 0 ] = a [ 0 ] −pOne [ 0 ] ;
25 t [ 1 ] = a [ 1 ] −pOne [ 1 ] ;
26 b [ 0 ] = a [ 0 ] + t [ 0 ] ∗ cos (MPI / 3.0) −t [ 1 ] ∗ sin (MPI / 3.0) ;
27 b [ 1 ] = a [ 1 ] + t [ 1 ] ∗ cos (MPI / 3.0) + t [ 0 ] ∗ sin (MPI / 3.0) ;
28 c [ 0 ] = pOne [ 0 ] + ( 2. 0 / 3. 0 ) ∗ (pTwo [ 0 ] −pOne [ 0 ] ) ;
29 c [ 1 ] = pOne [ 1 ] + ( 2. 0 / 3. 0 ) ∗ (pTwo [ 1 ] −pOne [ 1 ] ) ;
30 Gline (pOne [ 0 ] , pOne [ 1 ] , pTwo [ 0 ] , pTwo [ 1 ] ) ;
31 Gf i l l t r i a n g l e ( a [ 0 ] , a [ 1 ] , b [ 0 ] , b [ 1 ] , c [ 0 ] , c [ 1 ] ) ;
32
33 koch (pOne , a , curr +1, dep ) ; //Loop f o r angles
34 koch (a , b , curr +1, dep ) ;
35 koch (b , c , curr +1, dep ) ;
36 koch ( c , pTwo, curr +1, dep ) ;
37 }
38 void snowFlake ( double pOne [ ] , double pTwo [ ] , int depth ) {
39 double p3 [ 2 ] ; // Determine p3 f o r the 2nd and third curves
40 p3 [ 0 ] = pOne [ 0 ] + (pTwo[0]−pOne [ 0 ] ) ∗ cos(−MPI / 3.0)−(pTwo
[1]−pOne [ 1 ] ) ∗ sin (−MPI / 3.0) ;
41 p3 [ 1 ] = pOne [ 1 ] + (pTwo[1]−pOne [ 1 ] ) ∗ cos(−MPI / 3.0) + (pTwo
[0]−pOne [ 0 ] ) ∗ sin (−MPI / 3.0) ;
42
43 koch (pOne , pTwo, 0 , depth ) ; // Call the three parts to create the
snowflake out of koch curves
44 koch (pTwo, p3 , 0 , depth ) ;
45 koch (p3 , pOne , 0 , depth ) ;
46 Gf i l l t r i a n g l e (pOne [ 0 ] , pOne [ 1 ] , pTwo [ 0 ] , pTwo [ 1 ] , p3 [ 0 ] , p3 [ 1 ] )
;
47 }
48
49 int main () {
50 int swidth = 800; int sheight = 800;
51 double pOne [ 2 ] , pTwo [ 2 ] , p3 [ 2 ] ;
52 Ginit graphics ( swidth , sheight ) ;
53
54 Grgb (0.039 , 0.125 , 0.352) ;
55 Gclear () ;
56 f o r ( int i = 0; i< sheight ; i++){
57 f o r ( int j = 0; j<swidth ; j++){
58 double gradient = ( double ) i / sheight ;
59 Grgb (0.039∗gradient , 0.125∗gradient , 0.352∗gradient ) ;
60 Gpixel ( j , i ) ;
61 }
62 }
63 Grgb (1 ,1 ,1) ;
64 f o r ( int i =0; i<100; ++i ) {//White snowflake generation
65 pOne [ 0 ] = rand () % ( swidth ) ; // Declared here to use twice.
66 pOne [ 1 ] = rand () % ( sheight ) ;
67 pTwo [ 0 ] = (pOne [ 0 ] ) + ( i %20)∗cos ( rand () ) ;
68 pTwo [ 1 ] = (pOne [ 1 ] ) + ( i %20)∗sin ( rand () ) ;
69 snowFlake (pOne , pTwo, 5) ;
70 }
71 int key ;
72 key = Gwaitkey () ;
73 //Save to f i l e
74 Gsave tobmpfile ( ” RecursivePortfolio .bmp” ) ;
75 return 0;
76 }

2.5 IFS: An initial card
1 /∗
2 #Forest Pearson
3 #Fractals course
4 #06/14/
5 ∗/
6 #include ”FPToolkit. c”
7 #include<stdio. h>
8 #include<math. h>
9 #include<complex. h>
10 #include<tgmath. h>
11
12 int n ;
13 double current [ 2 ] ;
14 double square [ 2 ] ;
15 int swidth , sheight ;
16 double lowlefthirdCornerX , lowlefthirdCornerY , width , height ;
17
18 void s c a l e ( double x , double y){
19 current [ 0 ] ∗= x ;
20 current [ 1 ] ∗= y ;
21 }
22 void t r a n s l a t e ( double x , double y){
23 current [ 0 ] += x ;
24 current [ 1 ] += y ;
25 }
26 void rotate ( double angle ) {
27 double temp ;
28 double radians = angle∗MPI/180.0 ;
29 temp = current [ 0 ]∗cos ( radians )− current [ 1 ]∗sin ( radians ) ;
30 current [ 1 ] = current [ 0 ]∗sin ( radians ) + current [ 1 ]∗cos ( radians ) ;
31 current [ 0 ] = temp ;
32 }
33
34 void i n i t i a l s (){
35 double k ;
36 double height = 4;
37 double width = 10;
38 double widthScale = swidth /width ;
39 double heightScale = sheight / height ;
40 const double s = 5 0. 0 ;
41 f o r ( int i = 0; i<1000000; i++){
42 k = rand () % 9;
43 //Grgb ((190.0/255.0) , (59.0/255.0) , (255.0/255.0) ) ;
44 Grgb ((255.0/255.0) , (184.0/255.0) , (0.0/255.0) ) ;
45 i f (k == 0){
46 Grgb ((50.0/255.0) , (122.0/255.0) , (255.0/255.0) ) ;
47 s c a l e (( double ) 1/9 ,( double ) 3/7) ;
48 t r a n s l a t e (( double ) 1/9 ,( double ) 1/7) ;
49
50 }
51 e l s e i f (k == 1){
52 //Grgb ((51.0/255.0) , (255.0/255.0) , (138.0/255.0) ) ;
53 Grgb ( ( 0. 0 / 2 5 5. 0 ) , (0.0/255.0) , (0.0/255.0) ) ;
54 s c a l e (( double ) 1/9 ,( double ) 3/7) ;
55 t r a n s l a t e (( double ) 1/9 ,( double ) 3/7) ;
56 }
57 e l s e i f (k == 2){
58 s c a l e (( double ) 2/9 ,( double ) 1/7) ;
59 t r a n s l a t e (( double ) 2/9 ,( double ) 5/7) ;

60 }
61 e l s e i f (k == 3){
62 s c a l e (( double ) 2/9 ,( double ) 1/7) ;
63 t r a n s l a t e (( double ) 2/9 ,( double ) 3/7) ;
64 }
65 e l s e i f (k == 4){
66 Grgb ((50.0/255.0) , (122.0/255.0) , (255.0/255.0) ) ;
67 s c a l e (( double ) 1/9 ,( double ) 3/7) ;
68 t r a n s l a t e (( double ) 5/9 ,( double ) 1/7) ;
69 }
70 e l s e i f (k == 5){
71 Grgb ( ( 0. 0 / 2 5 5. 0 ) , (0.0/255.0) , (0.0/255.0) ) ;
72 s c a l e (( double ) 1/9 ,( double ) 3/7) ;
73 t r a n s l a t e (( double ) 5/9 ,( double ) 3/7) ;
74 }
75 e l s e i f (k == 6){
76 s c a l e (( double ) 1/9 ,( double ) 1/7) ;
77 t r a n s l a t e (( double ) 6/9 ,( double ) 5/7) ;
78 }
79 e l s e i f (k == 7){
80 //Grgb ((255.0/255.0) , (114.0/255.0) , (118.0/255.0) ) ;
81 Grgb ((216.0/255.0) , (115.0/255.0) , (0.0/255.0) ) ;
82 s c a l e (( double ) 1/9 ,( double ) 3/7) ;
83 t r a n s l a t e (( double ) 7/9 ,( double ) 3/7) ;
84 }
85 e l s e i f (k == 8){
86 s c a l e (( double ) 1/9 ,( double ) 1/7) ;
87 t r a n s l a t e (( double ) 6/9 ,( double ) 3/7) ;
88 }
89 G f i l l c i r c l e ( swidth∗current [ 0 ] , sheight∗current [ 1 ] , .10) ;
90 }
91 return ;
92 }
93 int main () {
94 swidth = 1200;
95 sheight = 800;
96 Ginit graphics ( swidth , sheight ) ;
97
98
99 //Grgb ((196.0/255.0) , (221.0/255.0) , (226.0/255.0) ) ;
100 Grgb ( ( 0. 0 / 2 5 5. 0 ) , (51.0/255.0) , (102.0/255.0) ) ;
101 Gclear () ;
102 Grgb ((255.0/255.0) , (215.0/255.0) , (0.0/255.0) ) ;
103 G f i l l r e c t a n g l e (0 ,0 , 20 , 800) ;
104 G f i l l r e c t a n g l e (1180 ,0 , 20 , 800) ;
105 G f i l l r e c t a n g l e (20 ,0 ,1300 ,20) ;
106 G f i l l r e c t a n g l e (0 ,780 ,1300 ,20) ;
107 Grgb ( 1. 0 , 1.0 , 1.0) ;
108 Grgb ( 0. 0 , 0.0 , 0.0) ;
109
110 double pi = 3.14159265;
111 double radian = pi /180.0;
112 srand ( time (NULL) ) ;
113 double n = rand () / (( double ) RANDMAX) ;
114
115 current [ 0 ] = swidth ;
116 current [ 1 ] = sheight ;

117 current [ 0 ] = n ;
118 current [ 1 ] = n ;
119 current [ 0 ] = 0. 0 ;
120 current [ 1 ] = 0. 0 ;
121 G f i l l c i r c l e ( current [ 0 ] ∗ swidth , current [ 1 ] ∗ sheight , 1) ;
122
123 i n i t i a l s () ;
124
125 int wait ;
126 wait = Gwaitkey () ;
127 Gsave tobmpfile ( ” IFSPortfolio .bmp” ) ;
128 }
