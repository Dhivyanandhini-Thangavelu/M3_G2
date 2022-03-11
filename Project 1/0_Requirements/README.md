# Remote Keyless Entry

# 1.About Remote Keyless Entry

## 1 Description
* Over 70% of the vehicles made today come with a remote keyless entry  system either standard or as an option. 
* RKE systems are also a high volume after-market accessory. Most remote keyless entry systems alarm the vehicle against theft and lock and unlock the doors and trunk. Some include remote start and car finder functions.
* These applications require good transmit-receive range and reliable transmission. Increased receiver sensitivity and high transmit power  directly impact range and reliability.
* Low price is an obvious requirement, as there are millions of these systems being installed.

# 2.Abstract
Most vehicles today have remote controls with two buttons that control the locking and the unlocking of the doors of the vehicles. The development of RFID (Radio Frequency Identification) technology will soon replace this method of opening and closing of the doors. When a transponder is placed near a reader, it will start to communicate with the reader and once the information exchange is successful, the door will open.

# 3.Features
1. Print lock – (Blue switch on- All led on at the same time)
2. Print unlock - (Blue switch press two times- All led off at the same time)
3. Print alarm activation/deactivation - (Blue switch press three times- All led on in clockwise manner)
4. Print approach light - (Blue switch press four times- All led on in anti-clockwise manner)

# 3.Requirements
## High level requirements
| HLR | Description |
|-----|-------------|
| HLR_01| This shall provide wireless lock and unlock |
| HLR_02| It requires wireless alarm activation and deactivation|
| HLR_03| It shall be provided with approach light|
| HLR_04 | It shall be provided with implementations of encryption and rolling code algorithms to prevent car thieves|

## Low level requirements
|HLR|LLR|Descripton|
|---|---|----------|
|HLR_01| LLR_01|LED shall be on according to the switch(press button)|
|HLR_01|LLR_02|LED shall be on in clock wise manner according to the switch(press button)|
|HLR_03|LLR_03|LED shall be on in Anti-clock wise manner according to the switch|
|HLR_04|LLR_04|LED should be off at same time|









