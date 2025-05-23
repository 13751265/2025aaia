//Sketch-library-manage library...
//安裝sound後,開始寫程式
//選單file-examples選librarys核心函式庫sound-soundfile
//再自己寫
import processing.sound.*;//Java使用sound外掛
SoundFile music,sword,monkey,intro;//宣告一個變數
void setup(){
  size(640,360);
  monkey=new SoundFile(this,"Monkey 1.mp3");
  sword=new SoundFile(this,"sword slash.mp3");
  intro=new SoundFile(this,"Intro Song_Final.mp3");
  music=new SoundFile(this,"In Game Music.mp3");
  music.play();//play()播放
}
void mousePressed(){
  if(mouseButton==LEFT)sword.play();
  else monkey.play();
}
void draw(){
  //裡面是空白
}
