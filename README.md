# composite-video-arduino-test
<div dir="rtl" align="center" color="black">

# Eglish Version coming soon.

مشروع تجريبي لفهم كيفية توليد فيديو لعرضه عبر مخرج فيديو من نوع composite video الخاص بالتيليفيزيون 
<br/>
 <br/>  صفحة ويكي المشروع 
 https://github.com/No-Shit/composit-video-arduino-test/wiki
 <br/>
الشيء الاول المراد فهمه أن عرض موجة إشارة الفيديو المرسلة للتلفزيون هو 64 مايكروثانية μs 64 
<br/>
 تساوي  <br/>
 <p dir="ltr" >
65 μs = 64 ÷ 1000000 = (1 ÷ 0.000064) = <b> 15625 Hz </b> 
</p>
<br/>   تقريبا 15 كيلوهيرتز 
<br/>
<img src="assets/compsit05.jpg" ><img/>
<br/>
اﻹشارة المرسلة تبداء بموجة مزامنة قيمتها صفر فولت 0V مدتها 4.7 مايكروثانية μs 4.7
<br/>
 بعدها تاثير اشاشة الفراغ blank و مدتها 4.5/5.7 مايركوثانية وفولتية 0.3V 
<br/> 
 اشارة خطوط عرض الصورة تكون بفولتية متبذبذة بين 0.3v - 1.0v  
حيث الوصول الى القيمة 1.0v تمثل اللون الابيض و القمية 0.3v تمثل اللون الأسود و القيم التي بينها تمثل تدرجات الرمادي 
<br/> 
اشارة انهاء الموجة blank مدتها μs 1.6 مايكروثانية بقيمة 0.3V   
<br/> 
<img src="assets/compsit04.jpg" ><img/>
<br/>
اشارة بيانات الصورة تحتوي على 640 نمودج لمكونات الصورة و هي تدريجات بين اللون الاسود و الابيض .  
<br/>  
<br/>

<img src="assets/compsit02.jpg" ><img/>
<br/>

<img src="assets/compsit01.jpg" ><img/>
<br/>

<img src="assets/compsit00.jpg" ><img/>
<br/>

<img src="assets/compsit06.jpg" ><img/>
<br/>

</div>
