<h1>Summary</h1>
The MacroWave is an annealing machine that evenly heats up 3D printed parts and cools them down to strenghten them! Similar to a microwave, it emits macro wavelengths of light (even though microwaves emit LONGER waves than the macrowave- isn't that funny?).

<h1>25 Hours Total</h1>

<h1>July 4th</h1>
Today I made a BOM with an overall thought process of the design of the machine. It's got features like an easy to use touch screen, 4 bulbs, a heating pad, PWM control, sensors, and a rotating bed!

![2025-07-04 14-34](https://github.com/user-attachments/assets/4bb91918-5d75-418a-a7cb-1282a1569e38)



Total Time Spent: 3 Hours

<h1>July 5th</h1>
After some changes to the design and BOM-optimizing (like switching 4 bulbs into 2 higher wattage bulbs), I began work on the PCB. I ended up finishing the entire PCB and squeezed it into less than 100mmx100mm so it should be able to fit in the budget. The PCB is just for the main control area and linking up all the components since a lot of the components aren't supposed to be mounted to the PCB.
Seeing the beautiful green "0 errors" in the DRC was the best part of all of this.

![CleanShot 2025-07-05 at 15 27 45](https://github.com/user-attachments/assets/8f331c28-81ca-4ca4-b9ae-463d7d1cd87d)

After that, I began work on the CAD. This took me the entire day, I'm writing this as of now when I've finished (without adding materials and colors and renders) at 12:27 AM after working the whole day. I'm really proud of how it came out. So first, I did the bottom. This consisted of a heated bed with an aluminum plate on top that is spun by a gearbox motor. I made the gear ratio so that the 10RPM would be converted to 5RPM due to annealing being a slow process.

![CleanShot 2025-07-06 at 00 28 43](https://github.com/user-attachments/assets/18f832c9-c93e-4d4f-bce1-464015017ee4)

![CleanShot 2025-07-06 at 00 28 32](https://github.com/user-attachments/assets/74243224-f6c6-4512-be1b-66832ab05246)

After that, I worked on the mains wiring as well as the 12V and 5V power. I added a sturdy structural system as well as the lights themselves. The entire top part was done as well which has a nice, large cooling fan, housing for the PCB and relays, areas to route the wires, and a cool design!

![CleanShot 2025-07-06 at 00 29 46](https://github.com/user-attachments/assets/0aafa365-4b49-43b5-87ec-fe6ff8b36fd7)

![CleanShot 2025-07-06 at 00 30 04](https://github.com/user-attachments/assets/94f275ed-9afd-4ce3-b3bf-cc6e73800917)

![CleanShot 2025-07-06 at 00 30 28](https://github.com/user-attachments/assets/cf25741a-daa9-46cf-8fa5-535a73172dea)

![CleanShot 2025-07-06 at 00 30 42](https://github.com/user-attachments/assets/842713bf-7066-4fe3-beeb-b4a68444ba5d)

Total Time Spent: 17 Hours (im going to sleep now)

<h1>July 6th</h1>

This morning, I started off by changing materials and getting some nice renders of the CAD. I really like how nice it looks, and I chose red (white would be good too) due to it reflecting the red light back to the plate.

![Assembly v38 5](https://github.com/user-attachments/assets/000de188-82eb-4091-bc46-311139308a61)
![Assembly v38 4](https://github.com/user-attachments/assets/6bb8dd27-405f-4c15-8535-a7381bf067bf)
![Assembly v38 3](https://github.com/user-attachments/assets/19322c86-1a2a-4966-bc5a-88741f266ffa)
![Assembly v38 2](https://github.com/user-attachments/assets/d6e9d522-4e32-416a-8f2c-bca8a3315925)
![Assembly v38](https://github.com/user-attachments/assets/c92ed8fd-f76d-4dde-b816-7c331d9e7946)

After that, I finished the wiring diagram!


![CleanShot 2025-07-06 at 10 53 06](https://github.com/user-attachments/assets/f5e452c9-7482-4ada-b4c9-0a51477ddc32)

I then finalized my README, BOM, uploaded my files, double checked prices, etc. It all looks good, I should be paying ~$30 out of pocket at the most optimized BOM.

Updated the wiring diagram as well to add a switch for better control instead of touch. I also updated the CAD.

![CleanShot 2025-07-06 at 12 40 23](https://github.com/user-attachments/assets/7e7ca5c0-8c3a-4a2c-a42e-8b50ed865b4f)

![CleanShot 2025-07-06 at 12 40 57](https://github.com/user-attachments/assets/06e18e81-fd92-4e04-b5f4-49e9923c5400)

After that, I attempted to get the firmware going, which took WAY longer than expected especially due to the touchscreen, but all the basic logic is there. If it doesn't work it'll probably just be a couple small changes since I don't actually have the physical screen and other components right now to test. Overall, everything should be ready to be built now.

Total Time Spent: ~5 Hours

<h1>August 3rd</h1>

I printed all the parts last night and got them together. My PCB however cannot be used, sadly because the microcontroller got bricked on arrival. There is no time to order another, so I'll be using a spare esp32 I found in my closet (luckily). I spent a good 2 hours trying to desolder the screen but in the end I had to break off the header pins. My whole room was in a fog of flux. After that, I wired up the power supply and mains AC input connector which worked great surprisingly! I have to say it was scary plugging it into the wall but when the led light on the switch lit up that was a good feeling. Anyways, the gearbox motor that spins the bed was not connected to the 3d printed gear super well. So I used my heat gun to have it shape to the shaft really well, which allowed it to spin over 5lbs of weight! (i didn't test any higher). 

![IMG_3106](https://github.com/user-attachments/assets/cd6f6c2d-e133-4c7f-9077-fb4089ca08a3)
![IMG_3112](https://github.com/user-attachments/assets/167922f4-6d2c-425c-8cf9-9a28c182a211)
![IMG_3114](https://github.com/user-attachments/assets/850c0f64-e7e1-4879-b658-f79693d63f12)
![IMG_3116](https://github.com/user-attachments/assets/86ac20de-7867-4948-829f-5588714258cc)

Time Spent: 6 Hours

<h1>August 4th</h1>


Today started out well. I finished all the mains wiring and it all worked! However, the TFT display came broken and thus I had to think of a different way to provide feedback to the user. An LCD Display would've been good, but my only one doesn't use I^2C and so I'd have to connect like 15 pins which is just absurd. I don't have any other displays on me, so the only rational answer is to redesign the small pcb cover on the top to accomodate a few indicator LEDs. Such as, the material selection could have 2, heating, power, etc. I think that this will still work well.

![IMG_3129](https://github.com/user-attachments/assets/a17183fa-e352-4687-8d51-15a927e300a5)
![IMG_3137](https://github.com/user-attachments/assets/f336db05-cb00-4b61-982b-4b60fd2f6d52)
![IMG_3138](https://github.com/user-attachments/assets/d2db13ae-9927-4e86-bf8a-63192b40f703)
