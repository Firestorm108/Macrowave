# Macrowave

A smart annealing system for 3D printed functional parts! It utilizes heating features such as a heated aluminum bed and infared heating lights that allow it to get up to 100C, perfect for PLA and PETG! My 3D printed parts
aren't always strong enough for my use cases, and I didn't want to ruin my oven by sticking my parts in there. So, I designed a cool looking annealing system that would do it better! Annealing is very effective, it can do crazy things like increase the heat resistance of PLA to 100C. It utilizes a rotating bed to evenly distribute the heat. Whatever 3D printed part you can fit on the plate, it'll easily be able to move it! Overall, it'll be an amazing machine to use for all kinds of projects in the future, and was a really fun project in itself!

<h1>What is annealing?</h1>

Annealing is the process of heating something in a controlled way and cooling it in a controlled way in order to relieve stress and increase properties of the object. It's used with all kinds of materials, from metals to plastics and more!

<h1>Pictures!</h1>

![CleanShot 2025-07-06 at 11 18 08](https://github.com/user-attachments/assets/ef3292cb-c982-4c77-a1b0-9aa1d2187b53)


![CleanShot 2025-07-06 at 11 16 58](https://github.com/user-attachments/assets/f1a1bda2-f936-433d-b6f2-9a90be53fba5)

![CleanShot 2025-07-06 at 11 17 24](https://github.com/user-attachments/assets/b290f7bf-d0de-46b2-92aa-0e52f5f389a0)

<h1>The PCB!</h1>

![CleanShot 2025-07-06 at 11 19 08](https://github.com/user-attachments/assets/6e9aea43-e051-440d-a6a6-084cc8729a48)

<h1>The wiring diagram!</h1>

![CleanShot 2025-07-06 at 11 19 39](https://github.com/user-attachments/assets/d65fbcc0-0d0f-4dcb-9e85-6e9853a46e60)

<h1>The BOM!</h1>
Bill of Materials

| Category                | Item                                                                                 | Price |
|------------------------|----------------------------------------------------------------------------------------|-------|
|      Frame             | Regular PETG *(Already Owned)*                                                       | $0    |
|                        | [12mm x 305mm Steel Rods](https://www.amazon.com/uxcell-Stainless-Steel-305mm-Working/dp/B0DKXSZ9M8/) | $17   |
|                        | [150mm Aluminum Disc](https://www.amazon.com/uxcell-Aluminum-Diameter-Thickness-Stamping/dp/B0DQ8H1FZG/) | $7    |
|      Control           | [12V → 5V Buck Converter](https://www.aliexpress.us/item/3256808220206305.html)       | $4    |
|                        | [Raspberry Pi Pico (SMD)](https://www.aliexpress.us/item/3256806910537897.html)       | $4    |
|                        | [2.8" Touch Display](https://www.aliexpress.us/item/3256806437054690.html)           | $6    |
|      Mains Power       | [Mains Plug](https://www.aliexpress.us/item/3256805500507047.html)                    | $6    |
|                        | [Fuses](https://www.aliexpress.us/item/3256806781121800.html)                         | $3    |
|                        | [Connector Socket](https://www.aliexpress.us/item/2251832520633643.html)             | $2    |
|                        | [12 AWG Wire](https://www.aliexpress.us/item/3256807619400327.html)                  | $4    |
|      Bed Movement      | [12V 10A Power Supply](https://www.amazon.com/Universal-Regulated-Switching-Industrial-Transformer/dp/B0CCL86TGY/) | $16   |
|                        | [5V 1-Channel Relay](https://www.aliexpress.us/item/3256805679282465.html)           | $4    |
|                        | [10RPM 12V DC Motor](https://www.aliexpress.us/item/2251832801627453.html)           | $10   |
|                        | [Slip Ring 2CH 5A](https://www.aliexpress.us/item/2251832799374262.html)             | $14   |
|      Bed Heating       | [150mm Heating Pad](https://www.aliexpress.us/item/3256805151930305.html)            | $18   |
|                        | [40A SSR](https://www.aliexpress.us/item/2251832734722079.html)                       | $4    |
|                        | [DS18B20 Temp Probe](https://www.aliexpress.us/item/3256807353480124.html)          | $3    |
|      IR Heating        | [Infrared Bulbs (2x)](https://www.amazon.com/REPTI-ZOO-Infrared-Reptile-Emitter/dp/B0B5W8XCNH/) | $18   |
|                        | [40A SSR](https://www.aliexpress.us/item/2251832734722079.html)                       | $4    |
|                        | [DS18B20 Temp Probe](https://www.aliexpress.us/item/3256807353480124.html)          | $3    |
|                        | [E26 Sockets](https://www.amazon.com/Ceramic-Standard-Medimun-Halogen-Incandescent/dp/B07FMRLSWC/) | $10   |
|                        | [Socket Extenders](https://www.amazon.com/DiCUNO-Extension-All-Directional-Adjustable-Converter/dp/B078WJJ7VZ/) | $8    |
|      Cooling           | [12V IP67 Cooling Fan](https://www.aliexpress.us/item/3256807400971120.html)         | $8    |
|                        | [5V 1-Channel Relay](https://www.aliexpress.us/item/3256805679282465.html)           | $4    |
|      JLCPCB            | PCB *(w/ shipping)*                                                                   | $5.30 |
|                        |                                                                                       |       |
|      Total             |                                                                                       | **$182.30** |
