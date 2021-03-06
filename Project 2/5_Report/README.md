# BiCom System
# Table of content (V1.1)
# 1.About the BiCom System
   i.Abstract
   ii.Description
   iii.Identifying features
   iv.State of art
   v.5W’s & 1H and S.W.O.T analysis
# 2.Requirements
   i.High level requirements
   ii.Low level requirements
# 3.Architecture
  i.Block diagram
  ii.Behavioural Diagram
     a.High Level Flow chart Behavioural Diagram
     b.Low Level Flow chart Behavioural Diagram
  iii.Structural Diagram
     a.High Level UML Use Case Structural Diagram
     b.Low Level UML Use Case Structural Diagram
# 4.Test plan and Output
  i.High level test plan
  ii.Low level test plan
# 5.Applications


# 1. About the BiCom System 
# i Abstract  
BiCom system is a communication system between car and its remote(Keyfob). The system gets its name as it performs two way communication (i.e) from remote to car and car to remote.This project is an extension of previous one. Here the transmission of data is from car to keyfob. The functionalities here are Window status, alarm status, car battery information, door status.These four functionalities will be implemented in this project. The previous project has Four functionalities for locking, unlocking, alarm activation and approach light which are transmitted to car. These functionalities are performed in project 1 RKE (Remote Keyless Entry).
# ii Description
A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system. Bicom Systems is a producer and vendor of Asterisk (PBX)-based unified communications devices for VoIP businesses which uses open standards of  telephony. Bicom Systems communication solution is a software suite developed by Bicom Systems, from essentials like PBXware to unified communications apps like gloCOM & gloCOM GO.
# iii Features 
1. Print window status (Blue switch on- All led on at the same time)
2. Print alarm status - (Blue switch press two times- All led off at the same time
3. Print car battery info – (Blue switch press three times- All led on in clockwise manner)
4. Print Door status (Blue switch press four times- All led on in anti-clockwise manner)

# iv State of Art
1. Buttons are provided to access the available features.
2. Shows each and every information when the buttons are pressed in
3. Alarm status of the car is displayed with a button press.
4. Battery status of the car is displayed with a button press.
# v 5W's & 1H
## What
A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system.
## Who
People using Automobiles.
## When
Whenever users want to lock or unlock access to automobiles and to know the status of battery, doors.
## Where
In there Vehicles.
## Why
For security purposes and controlling several functions.
## How
Through the buttons available in remote.
#  Swot Analysis
![bicom](https://user-images.githubusercontent.com/98883917/157861955-4c4b8a5e-72a3-4379-bcb6-e2aa20738a77.jpg)


# 2 Requirements
## i High Level Requirements
| HLR | Description |
|-----|-------------|
|HLR_01| It will prints the status of the window |
|HLR_02| It will  print the status of alarm |
|HLR_03| It will print the information about the battery of the car |
|HLR_04| It will print the status of the door |

## ii Low Level Requirements
|HLR|LLR| Description |
|---|---|-------------|
|HLR_01| LLR_01|According to  press the button, all LED's shall be on at same time|
|HLR_01|LLR_02|According to press the button, all LED's shall be off at same time|
|HLR_03|LLR_03|According to press the button, all LED's are on in Clockwise manner|
|HLR_04|LLR_04|According to press the button, all LED's are on in Anticlockwise manner|

## 3.Architecture

# i Block diagram
![Block diagram Bicon system](https://user-images.githubusercontent.com/98894505/157891082-ed72a164-4482-46f9-9802-943ab4f130f0.jpg)

# ii Structural diagrams

## a High level structural diagram
![image](https://user-images.githubusercontent.com/98894505/157897998-2063c377-aafe-400f-a0b2-611d09bd8652.png)


## b Low level structural diagram
![image](https://user-images.githubusercontent.com/98894505/157897966-76d93103-4341-4409-89b2-2df5aa7df8bc.png)

# iii Behavioural diagramms 

## a High level behavioural diagram
![image](https://user-images.githubusercontent.com/98894505/157898382-d3d56a45-7151-40c2-9168-33e725c6e1c1.png)

# b Low level behavioural diagram
![image](https://user-images.githubusercontent.com/98894505/157898493-c300e652-6670-47e9-8ebd-26448dbc8933.png)

# 4 Test plan and Output

## i High Level test plan

| Test ID| Description |Status|
|-----|-------------|---------|
|1| It will prints the status of the window |Implemented|
|2| It will  print the status of alarm |Implementted|
|3| It will print the information about the battery of the car |Implemented|
|4| It will print the status of the door |Implemented|

## ii Low Level test plan

|Test ID| Description |Status |
|------|----------------------------------------------|-------|
|1|According to press the button, all LED's shall be on at same time|Implemented|
|2||According to press the button, all LED's shall be off at same time|Implemented|
|3|According to press the button, all LED's are on in Clockwise manner|Implemented|
|4|According to press the button, all LED's are on in Anticlockwise manner|Implemented|


# 5 Applications of bicom system
 1. This system can be used in Fan , Light and Door Control and also can be used to know number of appliances like Fans and Lights 
 2. "On" status in  Houses,Industries,Stadiums etc...
 3. It can be used in Automatic Temperature Detector in Houses,Industries,Stadiums etc...

