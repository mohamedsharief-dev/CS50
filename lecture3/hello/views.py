from django.http import HttpResponse
from django.shortcuts import render


# Create your views here.
def index(request):
    return HttpResponse("Hello !")


def moe(request):
    return HttpResponse("Hello Moe :)")


def tayseer(request):
    return HttpResponse("Hello Tayseer !")
