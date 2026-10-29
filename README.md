<a name="oben"></a>

<div align="center">

|[:skull:ISSUE](https://github.com/frankyhub/Roby_Eyes/issues?q=is%3Aissue)|[:speech_balloon: Forum /Discussion](https://github.com/frankyhub/Roby_Eyes/discussions)|[:grey_question:WiKi](https://github.com/frankyhub/Roby_Eyes/wiki)||
|--|--|--|--|
| | | | |
<a href="https://github.com/frankyhub/Roby_Eyes/issues">![GitHub issues](https://img.shields.io/github/issues/frankyhub/Roby_Eyes)![GitHub closed issues](https://img.shields.io/github/issues-closed/frankyhub/Roby_Eyes)|<a href="https://github.com/frankyhub/Roby_Eyes/discussions">![GitHub Discussions](https://img.shields.io/github/discussions/frankyhub/Roby_Eyes)|<a href="https://github.com/frankyhub/Roby_Eyes/6eleases">![GitHub release (with filter)](https://img.shields.io/github/v/release/frankyhub/Roby_Eyes)|![Static Badge](https://img.shields.io/badge/RepoNr.:-%20115-blue)|
|![GitHub Created At](https://img.shields.io/github/created-at/frankyhub/Roby_Eyes)| <a href="https://github.com/frankyhub/Roby_Eyes/pulse" alt="Activity"><img src="https://img.shields.io/github/commit-activity/m/badges/shields" />| <a href="https://github.com/frankyhub/Roby_Eyes/graphs/traffic"><img alt="ViewCount" src="https://views.whatilearened.today/views/github/frankyhub/github-clone-count-badge.svg">  |<a href="https://github.com/frankyhub?tab=stars"> ![GitHub User's stars](https://img.shields.io/github/stars/frankyhub)||


# Robi_Eyes

<img src="pic/Roby_Eyes.gif" width="500"> 
<br> <br


## Story:
Das Repo beschreibt den Robi_Eyes, er hat zwei MAX7219 Displays für die Augen und er kann laufen, tanzen und den Moonwalk. Jedes Bein hat zwei Gelenke, die von Servo-Motoren bewegt werden. Als Steuerung dient ein Arduino NANO, gespeist von einer 9V-Batterie.
Die Robi_Eyes-Elemente werden aus einer 3mm Sperrholzplatte gelasert.



## Die Stückliste:

| Anzahl | Bezeichnung | 
| -------- | -------- | 
| 1  | Sperrholzplatte 300x600x3mm  | 
|  1 | NANO-Shield  | 
| 1  | Arduino NANO V3  | 
| 1  |  40 Pin Male 2,54mm Stiftleisten einreihig für das NANO-Shield | 
|  1 |  40 Pin Female 2,54 mm Buchsenleiste einreihig für das NANO-Shield | 
| 1  | Schalter 1 polig  | 
| 2  | MAX7219 Displays  | 
| 1  | 9V Batterie  | 
| 1  | 9V Batterie-Klipp  | 
| 4  | Servo Motore SG90  | 
| 2  | Zylinderkopf Schrauben M3x8  | 
| 1  | Kabelbinder 10cm  | 
| 1  | Holzleim  | 
| 1  | Sekundenkleber  | 
| 1  | 20cm Schaltlitze 0,25mm2  | 


## Der NANO mit Stiftleisten

<img src="pic/05robi.png" width="500"> 
<br> <br>

## Aufbau und Montage

Der Aufbau und die Montage von Robi ist in mehrere Schritte unterteilt

## Schritt 1: 

Verwende die Lasercutter Vorlage, bestehend aus, Kopfteil, Füße und Schuhe

<img src="pic/07robi.png" width="500"> 
<br> <br>


## Schritt 2: 

Das Kopfteil montieren.

<img src="pic/08robi.png" width="500"> 
<br> <br>

## Schritt 3: 

Die Hülle der beiden Füße verkleben.
Achtung: Wir benötigen zwei Füße. Die Öffnungen für die Servokabel sind jeweils innen und die Servos zeigen nach vorne!

<img src="pic/12robi.png" width="500"> 
<br> <br>

<img src="pic/14robi.png" width="500"> 
<br> <br>

<img src="pic/15robi.png" width="500"> 
<br> <br>

Die beiden Oberteile der Füße deckungsgleich verkleben (noch nicht an die Füße kleben!).

<img src="pic/16robi.png" width="500"> 
<br> <br>


Die Oberteile der Füße werden an den Servo im Kopfteil geschraubt.

Alternativ können zu besseren Stabilität auch die 3D-Druck Teile verwendet werden.

<img src="pic/35servofuss.png" width="500"> 
<br> <br>

## Schritt 4: 
Den Robi verdrahten, die Bauteile jedoch noch nicht in das Gehäuse montieren.

</div>
  
|	Servo	|	NANO|
| -------- | -------- | 
| Servo rechts oben| D5|
| Servo rechts unten | D6 |
| Servo links oben | D8 |
| Servo links unten  |D9 |
| -------- | -------- | 

  |  MAX72xx | NANO |
| -------- | -------- | 
|    VCC | 5V|
|    GND| GND|
 |   DIN | D11|
|    CS |  D10|
|    CLK | D13|
| -------- | -------- | 

<div align="center">

<img src="pic/31robi.png" width="500"> 
<br> <br>

## Schritt 5: 
Vor der Montage der Servos ist ein Funktionstest sinnvoll:
Den Robi mit der Arduino IDE (Robi_tanzt) programmieren. Es stehen auch Testprogramme für die Servos und das LED-Display zur Verfügung.

Im Robi_tanzt.ino Programm kann zur korrekten Position der Servos der CALIBRATION-Modus gewählt werden (Programmzeile 233).

Ist der Robi programmiert und sind die Servos in 90° Stellung, können sie in das Kopf-Unterteil und in die Füße montiert werden.


## Schritt 6: 
Die beiden Servos in 90° Stellung mit den unteren Kopfteil und den Oberteil der Füße verschrauben. Die Servos sollten durch die Verschraubung fest am Kopfteil sitzen. Anschließend die 9V-Batterie mit den Kabelbinder befestigen.

<img src="pic/21robi.png" width="500"> 
<br> <br>


Die Schrittmotore in die Fußhülle montieren und das Fuß Unterteil ankleben

<img src="pic/22robi.png" width="500"> 
<br> <br>

Die Schuhe an die Füße montieren

<img src="pic/24robi.png" width="500"> 
<br> <br>

Die Servo-Kabel in den Body führen und die Füße an die Fußoberteile kleben

<img src="pic/25robi.png" width="500"> 
<br> <br>

Alternativ können zu besseren Stabilität auch die 3D-Druck Teile verwendet werden.

<img src="pic/36servoschuh.png" width="500"> 
<br> <br>

## Schritt 7: 

Das "RUN" Programm in den NANO laden anschließend den NANO mit Shield, den Schalter und das LED-Display in das Kopfteil montieren.

</div>

Es stehen 3 Programm-Modis zur verfügung.

In der Programmzeile 233 den "RUN" Modus auswählen:

+ //#define INSTALL
+ //#define CALIBRATION
+ #define RUN

<div align="center">
  
## Schritt 8

Es stehen auch 3D-Druck Arme zur Verfügung, die an das Kopfteil geklebt werden. 

Abschließend folgt der Funktionstest.
  
---

  
## Technische Hinweise


Anschlüsse des Servo-Motor SG90/MG90:

<img src="pic/31robi.png" width="500"> 
<br> <br>

## Servo-Motor Impulsdiagramme:

<img src="pic/32robi.png" width="500"> 
<br> <br>

Impulsdiagramm: Ansteuerung des Servos mit einer Frequenz von 50 Hz:

<img src="pic/33robi.png" width="500"> 
<br> <br>

Impulsdiagramm: Ansteuerung des Servos mit einer Impulsbreite von 2,5ms (180°):

<img src="pic/34robi.png" width="500"> 
<br> <br>




---

<div style="position:absolute; left:2cm; ">   
<ol class="breadcrumb" style="border-top: 2px solid black;border-bottom:2px solid black; height: 45px; width: 900px;"> <p align="center"><a href="#oben">nach oben</a></p></ol>
</div>  

---

