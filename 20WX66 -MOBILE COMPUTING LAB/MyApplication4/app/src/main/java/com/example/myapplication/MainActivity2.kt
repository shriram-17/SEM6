package com.example.myapplication

import android.annotation.SuppressLint
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.EditText

class MainActivity2 : AppCompatActivity() {
    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main3)
         var ed1=findViewById<EditText>(R.id.ed1);
         var ed2=findViewById<EditText>(R.id.ed2);
         var ed3=findViewById<EditText>(R.id.ed3);
         var ed4=findViewById<EditText>(R.id.ed4);

        ed1.setText(intent.getStringExtra("fname"));
        ed2.setText(intent.getStringExtra("lname"));
        ed3.setText(intent.getStringExtra("radioText"));
        ed4.setText(intent.getStringExtra("spinnerValue"));

    }
}