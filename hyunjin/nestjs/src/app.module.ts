import { Module } from '@nestjs/common';
import { AppController } from './app.controller';
import { AppService } from './app.service';
import { SampleModule } from './sample/sample.module';
import { GetPostModule } from './get-post/get-post.module';
import { RequestPayloadModule } from './request-payload/request-payload.module';

@Module({
  imports: [SampleModule, GetPostModule, RequestPayloadModule],
  controllers: [AppController],
  providers: [AppService],
})
export class AppModule {}
