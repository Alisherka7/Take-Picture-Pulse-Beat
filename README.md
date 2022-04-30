# 아두이노를 이용한 강아지 심박수 카메라

# 개요
심장박동 센서와 카메라를 아두이노를 사용하여 연동하고 강아지에게 센서를 부작하면 강아지가 좋아하는 것을 보고 심장박동 수가 높아질 때 스스로 사진을 찍어 갖자이의 취향을 알아내고 귀여운 사진을 남길 수 있는 장치

# 부품 및 기능 
- 아두이노 보드
  - 센서 연결과 전원 공급
  - 센서 관련 코드 작성
<img width="330" alt="Screen Shot 2022-05-01 at 2 39 05" src="https://user-images.githubusercontent.com/38793933/166116344-dc452de0-5d39-40c7-9ff3-d1897e0252a0.png">

- 심장 박동 센서
  - 심박수 측정
  - 아두이노에 심박수 데이터 전송
<img width="359" alt="Screen Shot 2022-05-01 at 2 40 10" src="https://user-images.githubusercontent.com/38793933/166116383-d11e84ec-4908-4038-bcb6-400dcbf42931.png">

- ESP32-CAM
  - 사진 촬용
  - 사진 관련 코드 작성 
  - SD카드에 사진 저장
<img width="250" alt="Screen Shot 2022-05-01 at 2 40 57" src="https://user-images.githubusercontent.com/38793933/166116406-d3b0761c-a695-4872-8508-e1d9e632d0be.png">

- ESP32-CAM MB
  - ESP32-CAM의 코드 업로드
<img width="237" alt="Screen Shot 2022-05-01 at 2 41 47" src="https://user-images.githubusercontent.com/38793933/166116431-7954cb2b-87f9-4947-adb0-1e6e94f28f1f.png">


# 유스케이스 다이어그램
<img width="800" alt="Screen Shot 2022-05-01 at 2 42 39" src="https://user-images.githubusercontent.com/38793933/166116445-603492a5-4b27-43af-b7e3-0a8c06149900.png">


# 아두이노 연동 스케치
<img width="600" alt="Screen Shot 2022-05-01 at 2 45 37" src="https://user-images.githubusercontent.com/38793933/166116550-ab3e897c-f218-4b9a-a4a7-82319a594ccd.png">

## 구현 - 코드
- 아두이노 우노 보드 코드:
<img width="250" alt="Screen Shot 2022-05-01 at 2 47 06" src="https://user-images.githubusercontent.com/38793933/166116610-5453fb45-f6fa-4c4d-b7d0-0968dbe40a38.png">

- ESP32-CAM 코드 
<img width="300" alt="Screen Shot 2022-05-01 at 2 47 33" src="https://user-images.githubusercontent.com/38793933/166116619-75d55382-2380-4b9e-807b-eacc5562a08b.png">

# 사진
<img width="1133" alt="Screen Shot 2022-05-01 at 2 51 10" src="https://user-images.githubusercontent.com/38793933/166116754-0c70963a-5466-4673-a7ee-53f4a3a7436c.png">

