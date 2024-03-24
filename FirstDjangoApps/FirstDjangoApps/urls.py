from django.contrib import admin
from django.urls import include, path

urlpatterns = [
    path("ToDo/", include("ToDo.urls")),
    path("admin/", admin.site.urls),
]
