# Remote Keyless Entry
# Table of content (V1.1)
# 1.Remote Keyless Entry
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

# 1.About Remote Keyless Entry
#  i Abstract
   Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock. Typically, the action is to press a button on a physical fob or mobile app.

## ii Description
* Over 70% of the vehicles made today come with a remote keyless entry  system either standard or as an option. 
* RKE systems are also a high volume after-market accessory. Most remote keyless entry systems alarm the vehicle against theft and lock and unlock the doors and trunk. Some include remote start and car finder functions.
* These applications require good transmit-receive range and reliable transmission. Increased receiver sensitivity and high transmit power  directly impact range and reliability.
* Low price is an obvious requirement, as there are millions of these systems being installed.

## iii Identifying features:
* Keyless entry systems are used to remotely lock, unlock and start your car's engine using RF signals.
* It contains command and for security, rolling codes. 
* The remote keyless system's receiver in the car captures the RF signal, extracts it and sends the data stream to the CPU. The CPU decodes it and sends commands to the command module.

## iv State of art
* Here, The Main focus point  is to controlling the car remotely and also to  securing our car with a reliable Encryption System.
* Now the above  two features are combined and made into one product .
  i.e. RKE
* As the world PACE-FORWARD, our technology needs to catch up to the world.
 
#  v 5W's and 1H
![5W's and 1H](https://user-images.githubusercontent.com/98894505/157813566-fd73e6c1-44b2-4524-a984-eba7af8068f1.jpg)
# SWOT analysis
![RKE SWOT ANALYSIS](https://user-images.githubusercontent.com/98894505/157807641-88b5320a-01f8-48cb-86a9-c23330dbfda0.jpg)


# 2.Requirements
## High level requirements
| HLR | Description |
|-----|-------------|
| HLR_01| This shall provide wireless lock and unlock |
| HLR_02| It requires wireless alarm activation and deactivation|
| HLR_03| It shall be provided with approach light|
| HLR_04 | It shall be provided with hack proof technology|

## Low level requirements
|HLR|LLR|Descripton|
|---|---|----------|
|HLR_01| LLR_01|LED shall be on according to the switch(press button)|
|HLR_01|LLR_02|LED shall be on in clock wise manner according to the switch(press button)|
|HLR_02|LLR_01|Alarm shall be activated according to the push button|
|HLR_02|LLR_02|Alarm shall be deactivated according to the push button|
|HLR_03|LLR_01|It shall be provided with commands for safety purposes |
|HLR_03|LLR_02|It shall be provided with threat identification|
|HLR_04|LLR_01| It shall be provided with implementations of encryption and rolling code algorithms to prevent car thieves|
|HLR_04|LLR_02|It shall be provided with theft protection|

## 3.Architecture
# i Block diagram
![Block diagram  RKE](https://user-images.githubusercontent.com/98894505/157882571-7570c9c6-ab71-44fd-b8fb-c762b738c6e6.jpg)

# ii Behavioural diagram
# a High Level Flow chart Behavioural Diagram 
![Behavioural High Level Diagram 1](https://user-images.githubusercontent.com/98813206/157873206-5a15f575-8527-49d5-b146-884685de7e99.png)

# b Low Level Flow chart Behavioural Diagram
![Behavioural Low Level Diagram 1](https://user-images.githubusercontent.com/98813206/157873269-11e14f92-b553-4258-be14-2f1c4aeadafd.png)

# iii Structral diagram
# a High Level UML Use Case Structural Diagram
![Structural High Level Diagram](https://user-images.githubusercontent.com/98813206/157873331-e01a3227-8a41-43dc-a8b0-c7a0ab239445.png)

# b Low Level UML Use Case Structural Diagram
![Structural Low Level Diagram](https://user-images.githubusercontent.com/98813206/157873366-ae06efb0-d594-456c-89cb-8fd662bc53af.png)

# 4 Test plan and Output

## i High level test plan

| Test ID | Description | Status |
|--------|--------------|--------|
| 1 | This shall provide wireless lock and unlock | Implemented |
| 2 | It requires wireless alarm activation and deactivation| Implemented |
| 3| It shall be provided with approach light|Implemented|
| 4 | It shall be provided with hack proof technology|Implemented|

## ii Low level test plan

| Test ID | Description | Status |
|---------|-------------|--------|
| 1 | LED shall be on according to the switch(press button)|Implemented |
|2|LED shall be on in clock wise manner according to the switch(press button)|Implemented|
|3|Alarm shall be activated according to the push button|Implemented|
|4|Alarm shall be deactivated according to the push button|Implemented|
|5|It shall be provided with commands for safety purposes |Implemented|
|6|It shall be provided with threat identification|Implemented|
|7| It shall be provided with implementations of encryption and rolling code algorithms to prevent car thieves|Implemented|
|8|It shall be provided with theft protection|Implemented|

## 5 Applications
  1. It can be widely used in automobiles,an RKS performs the functions of a standard car key without hysical contact.
  2. When ithin a few yards of the car , pressing a button on the remote can lock or unlock the doors .
  3. It may also performs some other functions













