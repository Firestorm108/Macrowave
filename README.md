# Macrowave

![IMG_3163 2](https://github.com/user-attachments/assets/b82ed74f-fb1c-4232-82b7-75a63ab538ad)

Demo: https://www.youtube.com/shorts/_aIIx7PhhNs

A smart annealing system for 3D printed functional parts! It utilizes heating features such as a heated aluminum bed and infared heating lights that allow it to get up to 80C, perfect for PLA and PETG! My 3D printed parts
aren't always strong enough for my use cases, and I didn't want to ruin my oven by sticking my parts in there. So, I designed a cool looking annealing system that would do it better! Annealing is very effective, it can do crazy things like increase the heat resistance of PLA to 100C. It utilizes a rotating bed to evenly distribute the heat. Whatever 3D printed part you can fit on the plate, it'll easily be able to move it! Overall, it'll be an amazing machine to use for all kinds of projects in the future, and was a really fun project in itself!

<h1>What is annealing?</h1>

Annealing is the process of heating something in a controlled way and cooling it in a controlled way in order to relieve stress and increase properties of the object. It's used with all kinds of materials, from metals to plastics and more!

<h1>Pictures!</h1>

![Assembly v40](https://github.com/user-attachments/assets/96ba6657-4704-4985-aed6-d49fc6da6032)

![CleanShot 2025-07-06 at 13 49 01](https://github.com/user-attachments/assets/6944bb38-9eb7-44a7-b28d-d11b921c79ef)

![CleanShot 2025-07-06 at 13 48 49](https://github.com/user-attachments/assets/3742120c-26ff-47f7-8c03-b47f6d027bf8)

<h1>The PCB! (and schematic)</h1>

![CleanShot 2025-07-06 at 13 38 28](https://github.com/user-attachments/assets/584e56f9-193b-41b4-9055-7b0c963a7b83)


![CleanShot 2025-07-06 at 11 19 08](https://github.com/user-attachments/assets/6e9aea43-e051-440d-a6a6-084cc8729a48)

<h1>The wiring diagram!</h1>

![CleanShot 2025-07-06 at 12 47 22](https://github.com/user-attachments/assets/a83978bc-89b0-4fc0-b871-9527483fc3de)



<h1>The BOM!</h1>
Bill of Materials

| Category           | Item                                                                                  | Price  |
|--------------------|---------------------------------------------------------------------------------------|--------|
| Frame              | Regular ASA  *(Already Owned)*                                                        | $0     |
|                    | Reflective Insulation Panels                                                          | $0     |
|                    | [12mm x 305mm Steel Rods](https://www.amazon.com/uxcell-Stainless-Steel-305mm-Working/dp/B0DKXSZ9M8/)  | $17    |
|                    | [150mm Aluminum Disc](https://www.amazon.com/uxcell-Aluminum-Diameter-Thickness-Stamping/dp/B0DQ8H1FZG/) | $7     |
| Control            | [12V → 5V Buck Converter](https://www.aliexpress.us/item/3256808220206305.html)        | $4     |
|                    | [Raspberry Pi Pico (Surface Mount)](https://www.aliexpress.us/item/3256806910537897.html) | $4     |
|                    | [2.8" Touch Display](https://www.aliexpress.us/item/3256806437054690.html)             | $6     |
|                    | [Toggle Switch SPDT](https://www.aliexpress.us/item/2251832806771133.html)             | $2     |
| Mains Power        | [Mains Plug](https://www.aliexpress.us/item/3256805500507047.html)                     | $6     |
|                    | [Fuses](https://www.aliexpress.us/item/3256806781121800.html)                          | $3     |
|                    | [Connector Plug Socket](https://www.aliexpress.us/item/2251832520633643.html)          | $2     |
|                    | [12 AWG Wire](https://www.aliexpress.us/item/3256807619400327.html)                    | $4     |
| Bed Movement       | [12V 10A Power Supply](https://www.amazon.com/Universal-Regulated-Switching-Industrial-Transformer/dp/B0CCL86TGY/) | $16    |
|                    | [5V 1-Channel Relay](https://www.aliexpress.us/item/3256805679282465.html)             | $4     |
|                    | [10RPM 12V Brushed DC Motor](https://www.aliexpress.us/item/2251832801627453.html)     | $10    |
|                    | [Slip Ring 2 Channels 5A](https://www.aliexpress.us/item/2251832799374262.html)        | $14    |
| Bed Heating        | [150mm Circular Heating Pad](https://www.aliexpress.us/item/3256805151930305.html)     | $18    |
|                    | [40A SSR](https://www.aliexpress.us/item/2251832734722079.html)                        | $4     |
|                    | [DS18B20 Temperature Probe](https://www.aliexpress.us/item/3256807353480124.html)      | $3     |
| Infrared Light Heating | [Infrared Light Bulbs](https://www.amazon.com/REPTI-ZOO-Infrared-Reptile-Emitter/dp/B0B5W8XCNH/)  | $18    |
|                    | [40A SSR](https://www.aliexpress.us/item/2251832734722079.html)                        | $4     |
|                    | [DS18B20 Temperature Probe](https://www.aliexpress.us/item/3256807353480124.html)      | $3     |
|                    | [E26 Light Sockets](https://www.amazon.com/Ceramic-Standard-Medimun-Halogen-Incandescent/dp/B07FMRLSWC/) | $10    |
|                    | [Socket Extender/Twisters](https://www.amazon.com/DiCUNO-Extension-All-Directional-Adjustable-Converter/dp/B078WJJ7VZ/) | $8     |
| Cooling            | [BLDC 12V Cooling Fan (12025 12V Dual Ball IP67)](https://www.aliexpress.us/item/3256807400971120.html) | $8     |
|                    | [5V 1-Channel Relay](https://www.aliexpress.us/item/3256805679282465.html)             | $4     |
| JLCPCB             | PCB *(w/ shipping)*                                                                    | $5.30  |
| Screws             | 10-30mm M4, M3, M5 Screws *(Already Owned)*                                           | $0     |
|                    |                                                                                       |        |
| **Total**          |                                                                                       | **$182.30** |

