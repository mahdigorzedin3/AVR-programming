# **AVR Programming - University Project**

In this repository, we have shared our **AVR ATmega16A programming** project, which we developed as part of the _Principles of Computer Systems_ course at **Golestan University**.

Our **C and HEX** codes can be found in the `Codes` directory. However, please note that the HEX files are specifically compiled for the **ATmega16A** microcontroller and may not work on other CPUs.

In this project, we implemented **basic embedded programming tasks**, including:  
✔ **LED Blinking**  
✔ **7-Segment Display Control**  
✔ **Dot Matrix Display Handling**

We had limited time since we started this project near the end of the semester. Additionally, we had no guidance throughout the process and learned everything **on our own**. However, with the help of this repository and enough time, you can build **more complex** projects.

---

## **🚀 Getting Started with the Project**

### **1️⃣ Install Required Software**

🔹 Download and install **Zadig** and **ProgISP** on your laptop.

### **2️⃣ Connect the AVR to Your Laptop**

🔹 Power on the AVR and connect the **USB cable** to your laptop.  
🔹 There's a **button next to the CPU**—if you encounter any errors in the next steps, try pressing that button. It makes the CPU accessible.

### **3️⃣ Set Up USB Drivers**

🔹 Open **Zadig** → Click **Options** → Select **List All Devices**.  
🔹 Choose **USBasp** → Select **lib-win32** → Click **Install Driver**.

### **4️⃣ Verify Microcontroller Connection**

🔹 Open **ProgISP** → Select your **CPU type**.  
🔹 Click **RD (Read ID)**. If you see _"Read ID successfully"_, everything is fine. If not, there is a connection issue—do not proceed further.

### **5️⃣ Install Atmel Studio and Write C Code**

🔹 Install **Atmel Studio** and start writing your C code.  
🔹 If you use our codes, you must configure the project settings:

- In **Atmel Studio**, go to **Project → Properties → AVR/GNU C Compiler → Symbols**.
- Add: `F_CPU=1000000UL`.

### **6️⃣ Compile and Generate HEX File**

🔹 In **Atmel Studio**, go to **Build → Build Solution**.  
🔹 This will generate a **HEX file** in the output folder.

### **7️⃣ Upload the Code to AVR**

🔹 Connect the required **ports and components** to the AVR using wires.  
🔹 Refer to the circuit **images** in the `Codes` directory for wiring details.  
🔹 Open **ProgISP** → Click **Erase** (to clear the CPU).  
🔹 Click **Load Flash** → Select your **HEX file** → Click **Auto**.

🎉 **Congratulations! Your project is now successfully uploaded.**

---

## **💡 Need Help? Contact Us!**

If you face any issues during the process, feel free to reach out to us:  
📧 **[mahdigorzedin@gmail.com](mailto:mahdigorzedin@gmail.com)**  
📧 **[Shamin.nersi@gmail.com](mailto:Shamin.nersi@gmail.com)**
