//Sketch-library-manage library...
//�w��sound��,�}�l�g�{��
//���file-examples��librarys�֤ߨ禡�wsound-soundfile
//�A�ۤv�g
import processing.sound.*;//Java�ϥ�sound�~��
SoundFile music,sword,monkey,intro;//�ŧi�@���ܼ�
void setup(){
  size(640,360);
  monkey=new SoundFile(this,"Monkey 1.mp3");
  sword=new SoundFile(this,"sword slash.mp3");
  intro=new SoundFile(this,"Intro Song_Final.mp3");
  music=new SoundFile(this,"In Game Music.mp3");
  music.play();//play()����
}
void mousePressed(){
  if(mouseButton==LEFT)sword.play();
  else monkey.play();
}
void draw(){
  //�̭��O�ť�
}
