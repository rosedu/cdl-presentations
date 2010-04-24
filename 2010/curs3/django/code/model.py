class Artifact(models.Model):
    """ Artifact object, now streamline """
    name = models.CharField(max_length=100)
    description = models.TextField(blank=True)
    image = models.ImageField(upload_to=config.MEDIA_ARTIFACTS)
    
    def __unicode__(self):
        return self.name
