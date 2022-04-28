#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <thread>
using namespace std::literals::chrono_literals;
int main(int argc, char *argv[])
{
    cv::Mat img = cv::Mat::zeros(500, 500, CV_8UC3);    //空白の画像を表示する。500,500が縦横の大きさ。ここを変更すると大きさが変わる

    cv::circle(img, cv::Point(95, 355), 95, cv::Scalar(255, 0, 0), 5);
    cv::line(img, cv::Point(100, 100), cv::Point(400, 105), cv::Scalar(0,0,200), 3, 4);

    cv::namedWindow("drawing"); //画像のウィンドウ名の変更。正直どうでもいい。
    cv::imshow("drawing", img); //画像の表示。これをfor文で一回回す毎に実行すれば画像が更新される。
    std::this_thread::sleep_for(300ms);         //指定の秒数スリープする。これで画像の更新頻度を変えられる。今は300ms。ここを100msとかにすれば100ミリ秒になる。
    cv::waitKey(0);     //キーボードが押されるまで画像が消えない様にする関数。これが無いと瞬時に終わってしまう。でもこれをfor文の中に入れるといちいちキーボードを押さなくてはいけなくなるので困る。
}