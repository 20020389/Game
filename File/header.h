//
// Created by snow on 30/03/2021.
//

#ifndef GAME_HEADER_H
#define GAME_HEADER_H
#include <bits/stdc++.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>

class Snow
{
public:
    Snow()
    {
        this->running= true;
        this->BG="light";
        this->limit_init=true;
        this->choose_map="home";
        this->Music_Play= false;
        this->Choose_MS=1;
        this->score=0;
        this->Press_to_Begin=true;
        this->radian=0;
        this->Time_Animation = 1;
        this->Survival=true;
        this->Fly= false;
        this->Limit_Up=0;
        this->Step_Up=6;
        this->Step_Down=1;
        this->Speed_Down=0;
        this->Bird = {200,380,62,44};
        this->volume=30;
        this->Hit=0;
        this->HC="Hello";
        this->HC_change=true;
        for(int i=0;i<4;i++)
        {
            this->Pipe_Up[i].h=824;
            this->Pipe_Up[i].w=104;
            this->Pipe_Up[i].y=900;
            if(i==0)
                this->Pipe_Up[i].x=-150;
            else
                this->Pipe_Up[i].x=Pipe_Up[i-1].x+300;
            this->Pipe_Down[i].h=824;
            this->Pipe_Down[i].w=104;
            this->Pipe_Down[i].y=-900;
        }
        this->Pipe_Num=0;
        this->Level=20;
        this->Lv_Move=false;
        this->Limit_LV_Move=0;
        this->Change_Vl= false;
        this->time_ChangeVL=0;
        this->End_Ms= false;
        this->About=false;
        this->Key=SDLK_w;
        this->Key_Change= false;
        this->Ranger_Click= false;
        this->Time_Click=1;
        this->Name_Key="W";
        this->user_using="SNOW";
        this->user_changing= false;
        this->ghost_user="";
        this->user_draw={400,500,0,0};
    }


    //--------------------------------------------------

    ~Snow() =default;


    bool limit_init;               //limit cho phép chương trình khởi tạo biến 1 lần
    bool Press_to_Begin;            //Press_... Dừng chương trình khi bắt đầu game
    bool running,Music_Play;            // Music Play cho phép nhạc bật tắt
    std::string BG;                     //Lựa chọn nền
    std::string choose_map;             //Lựa chọn map
    SDL_Event e;
    SDL_Renderer* render;
    int mouse_x,mouse_y;             //Tọa độ chuột
    int Choose_MS;                   //Chọn Nhạc
//Bird:
    int radian;                         //Góc quay của Bird
    int Time_Animation;                 //thời gain sửa hoạt ảnh chim
    bool Survival,Fly;                  //Kiểm tra chim sống hay k, khi chim bay Fly=true
    int Limit_Up;                       //Giới hạn bay
    int Step_Up,Step_Down;              //Tốc độ bay lên và hạ xuống
    int Speed_Down;                     //Hạ xuống càng lâu tốc độ càng , Biến này thay đổi tốc độ rơi
    SDL_Rect Bird;                      //
    int Hit;                            //Biến này để chạy âm thanh và hiệu ứng khi die
//Pipe:
    SDL_Rect Pipe_Up[4],Pipe_Down[4];    //Biến ô base của ống nước
    int Pipe_Num;                        //Biến này để xác định xem chim đang đi đến ống nước nào
    bool Pipe_Start[4]= {false};        //Cho ống nước chạy
    int Pipe_Hard=0;                    //Độ khó
    int speed[4]={0};                   //Tốc độ của ống nước
//Score:
    int score;                           // điểm khi chơi
    int high_score[68][3];                 //Điểm cao
    bool HC_change;                     //Trả về true nếu điểm cao bị thay đổi
    std::string HC;                     //biến hỗ trợ vẽ điểm cao ra màn hình home
    int Last_HC;                        //Biến lưu điểm cao cũ để so sánh nếu điểm cao thay đổi
    int Level;                          // Biến lưu độ khó
//Setting
    bool Lv_Move;                       //biến xác nhận sửa level trong setting
    int Limit_LV_Move;                  //biến lưu vị trí của chuột với con trỏ level
//Music:
    bool End_Ms;  //kết thúc bài hát sẽ chuyển bài khác

//volume:
    double volume;     //Biến âm lượng
    bool Change_Vl;    //trả về true nếu thay đổi âm lượng
    int time_ChangeVL;  //thời gian bảng volume hiện lên
//Somethings:
    bool About; //biến xác nhận vẽ khung màn hình about
//Key:             //Các biến về lưu trữ key
    SDL_KeyCode Key;     //Biến lấy key
    bool Key_Change,Ranger_Click;   //Key_Change kiểm tra người chơi muốn đổi key hay không, Ranger_Click là Xử lý double click
    int Time_Click;                 //Độ trễ Double Click
    std::string Name_Key;           //Trả về tên phím

//user:
    std::string user_using,ghost_user;
    bool user_changing;
    SDL_Rect user_draw;

///Funcions:
    void Init() //hàm khởi tạo vị trí ống nước mỗi lần game bắt đầu
    {
        this->Bird = {200,380,62,44};
        for(int i=0;i<4;i++)
        {
            this->Pipe_Up[i].h=824;
            this->Pipe_Up[i].w=104;
            this->Pipe_Up[i].y=900;
            if(i==0)
                this->Pipe_Up[i].x=-150;
            else
                this->Pipe_Up[i].x=Pipe_Up[i-1].x+300;
            this->Pipe_Down[i].h=824;
            this->Pipe_Down[i].w=104;
            this->Pipe_Down[i].y=-900;
        }
        this->Pipe_Num=0;

    }

};


#endif //GAME_HEADER_H
