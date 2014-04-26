using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using Microsoft.DirectX.AudioVideoPlayback;

namespace VideoPlayback01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private string path = @"E:\Media\Абсолютный маст-хэв.mp4";
        private Video video = null;

        private void Form1_Load(object sender, EventArgs e)
        {
        }
        private void button1_Click(object sender, EventArgs e)
        {
            video = new Video(path, true);
            video.Owner = VideoPanel;
        }
        private void button2_Click(object sender, EventArgs e)
        {
            video = new Video(path, false);
            video.Owner = VideoPanel;
            video.Play();
        }
    }
}
