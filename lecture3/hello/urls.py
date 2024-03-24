from django.urls import path

from . import views

urlpatterns = [
    path("", views.index, name="index"),
    path("moe", views.moe, name="moe"),
    path("tayseer", views.tayseer, name="tayseer")
]
