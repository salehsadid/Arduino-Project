import processing.serial.*;

Serial myPort;

String angle = "";
String distance = "";
String data = "";
int iAngle, iDistance;

void setup() {
  size(1200, 700);
  smooth();
  myPort = new Serial(this, "COM5", 9600);  // Change COM port accordingly
  myPort.bufferUntil('.');
}

void draw() {
  background(0, 10);  // Motion blur effect

  drawRadar();
  drawLine();
  drawObject();
  drawText();
}

void serialEvent(Serial myPort) {
  data = myPort.readStringUntil('.');
  if (data != null && data.length() > 1) {
    data = data.substring(0, data.length() - 1);
    int index1 = data.indexOf(",");
    if (index1 > 0) {
      angle = data.substring(0, index1);
      distance = data.substring(index1 + 1);
      iAngle = int(angle);
      iDistance = int(distance);
    }
  }
}

void drawRadar() {
  pushMatrix();
  translate(width / 2, height - height * 0.074);
  noFill();
  stroke(0, 255, 0);
  strokeWeight(2);
  arc(0, 0, width * 0.9, width * 0.9, PI, TWO_PI);
  arc(0, 0, width * 0.6, width * 0.6, PI, TWO_PI);
  arc(0, 0, width * 0.35, width * 0.35, PI, TWO_PI);

  line(-width / 2, 0, width / 2, 0);
  for (int angle = 30; angle <= 150; angle += 30) {
    float rad = radians(angle);
    line(0, 0, (-width / 2) * cos(rad), (-width / 2) * sin(rad));
  }
  popMatrix();
}

void drawLine() {
  pushMatrix();
  stroke(0, 255, 0);
  strokeWeight(3);
  translate(width / 2, height - height * 0.074);
  line(0, 0, (height * 0.85) * cos(radians(iAngle)), -(height * 0.85) * sin(radians(iAngle)));
  popMatrix();
}

void drawObject() {
  pushMatrix();
  translate(width / 2, height - height * 0.074);
  stroke(255, 0, 0);
  strokeWeight(8);
  float pixDistance = iDistance * 5;  // Scale distance for display
  if (iDistance < 40) {
    point(pixDistance * cos(radians(iAngle)), -pixDistance * sin(radians(iAngle)));
  }
  popMatrix();
}

void drawText() {
  fill(0, 255, 0);
  textSize(20);
  text("Angle: " + iAngle + "°", 20, 30);
  text("Distance: " + iDistance + " cm", 20, 60);
  if (iDistance > 40) {
    text("Out of Range", 20, 90);
  } else {
    text("In Range", 20, 90);
  }
}
