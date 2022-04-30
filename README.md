# Take Picture by Pulse Beat Arduino Uno 
<img src="https://user-images.githubusercontent.com/38793933/166116947-be5e9fbd-2c4a-4c23-be1d-e12c3e92d6cd.png" align="right"
     alt="Size Limit logo by Anton Lovchikov" width="300">
The project made on arduino allows you to take a picture with the help of a heart pulse

- **To take a photo**, simply attach the heart rate sensor to your pet
- **Manage heart rate** limitation with smartphone
- **Saving data** to a memory card
- The camera module is in **sleep mode** until the pulse reaches the desired limit


## How It Works

1. **USECASE**
<img width="1219" alt="Screen Shot 2022-05-01 at 3 16 56" src="https://user-images.githubusercontent.com/38793933/166117610-4d994d1b-d091-4f43-90fa-69a9ae865ae3.png">


2. **MODULES**
<img width="800" alt="Screen Shot 2022-05-01 at 3 21 57" src="https://user-images.githubusercontent.com/38793933/166117771-cb717c6e-c62a-4f03-8ae5-ad69902213fc.png">


3. **Sketch**
<img width="400" alt="Screen Shot 2022-05-01 at 3 22 56" align="center" src="https://user-images.githubusercontent.com/38793933/166117819-bb5b489e-c5ba-48ea-8c62-8e3d41dc89df.png">


# Arduino uno sends a series of pulse data

1.  The series sends a **"SHOOT"** message if the pulse exceeds the limit
```ino
  void loop()
  {
    delay(500);
    Serial.print("심박수 -> ");
    Serial.println(BPM);
  
    if(BPM >= 110 and BPM <= 130)
    {
      delay(2000);
      Serial.write("shoot");
      delay(3000);
      Serial.println();
    }
  }
```
  
2.  The camera module will take a picture and save it to the memory card when it receives the desired command **"SHOOT"**
```ino
  void loop() {
  if(Serial.available()){
    String getString = Serial.readString();
    if(getString.equals("shoot")){
      camera_fb_t * fb = NULL;
      // Take Picture with Camera...
```


